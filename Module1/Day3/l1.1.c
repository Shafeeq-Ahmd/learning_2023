#include <stdio.h>

void print_spaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
    
}

void print_numbers(int n, int m) {
    for (int j = 1; j <= n; j++) {
        printf("%d", j);
    }
    
  print_spaces(2 * (m - n));
    
    for (int j = n ; j >= 1; j--) {
        printf("%d", j);
    }
}



void print_pattern(int n) {
    int m = n;
    for (int i = n; i >= 1; i--) {
        print_numbers(i,m);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    print_pattern(n);

    return 0;
}
