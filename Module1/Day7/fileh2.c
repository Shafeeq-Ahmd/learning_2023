#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>

void copyFileToUpper(FILE* source, FILE* destination) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(toupper(ch), destination);
    }
}

void copyFileToLower(FILE* source, FILE* destination) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(tolower(ch), destination);
    }
}

void copyFileToPurelyUpper(FILE* source, FILE* destination) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, destination);
    }
}

void copyFile(FILE* source, FILE* destination) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 4) {
        printf("Usage: ./cp [option] source_file destination_file\n");
        return 1;
    }

    char* option = argv[1];
    char* sourceFileName = argv[2];
    char* destinationFileName = argv[3];

    FILE* sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error opening the source file.\n");
        return 1;
    }

    FILE* destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Error creating the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    if (strcmp(option, "-u") == 0) {
        copyFileToUpper(sourceFile, destinationFile);
    } else if (strcmp(option, "-l") == 0) {
        copyFileToLower(sourceFile, destinationFile);
    } else if (strcmp(option, "-s") == 0) {
        copyFileToPurelyUpper(sourceFile, destinationFile);
    } else {
        copyFile(sourceFile, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
