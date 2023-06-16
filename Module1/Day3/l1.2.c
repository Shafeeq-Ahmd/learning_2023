#include <stdio.h>

void printBits(int num) {
     unsigned int mask = 1<<31; // Start with MSB

    for (int i = 0; i < 32; i++) {
        // Check if the current bit is set (1) or unset (0)
        int bit = (num & mask) ? 1 : 0;
        printf("%d", bit);

        // Shift the mask to the right by one position
        mask >>= 1;
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a 32-bit integer :");
    scanf("%d", &num);

    printf("Bits of the entered number :");
    printBits(num);

    return 0;
}
