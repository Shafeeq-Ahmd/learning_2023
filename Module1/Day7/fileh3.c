#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
};

void extractData(FILE* file, struct LogEntry logEntries[], int* numEntries) {
    char line[100];
    char* token;
    int entryIndex = 0;

    while (fgets(line, sizeof(line), file) != NULL && entryIndex < MAX_ENTRIES) {
        token = strtok(line, ",");

        logEntries[entryIndex].entryNo = atoi(token);
        
        token = strtok(NULL, ",");
        strcpy(logEntries[entryIndex].sensorNo, token);
        
        token = strtok(NULL, ",");
        logEntries[entryIndex].temperature = atof(token);
        
        token = strtok(NULL, ",");
        logEntries[entryIndex].humidity = atoi(token);
        
        token = strtok(NULL, ",");
        logEntries[entryIndex].light = atoi(token);
        
        token = strtok(NULL, ",");
        strcpy(logEntries[entryIndex].timestamp, token);

        entryIndex++;
    }

    *numEntries = entryIndex;
}

void displayData(const struct LogEntry logEntries[], int numEntries) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    
    for (int i = 0; i < numEntries; i++) {
        printf("%d\t%s\t%.1f\t\t%d\t\t%d\t%s\n", logEntries[i].entryNo, logEntries[i].sensorNo,
               logEntries[i].temperature, logEntries[i].humidity, logEntries[i].light,
               logEntries[i].timestamp);
    }
}

int main() {
    struct LogEntry logEntries[MAX_ENTRIES];
    int numEntries = 0;

    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    extractData(file, logEntries, &numEntries);
    displayData(logEntries, numEntries);

    fclose(file);

    return 0;
}
