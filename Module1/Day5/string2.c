#include <stdio.h>

int main()
{
    printf("Enter the size of string: ");
    int n;
    scanf("%d", &n);

    printf("Enter the string: ");
    char str[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = result * 10 + (str[i] - '0'); 
        // subtracting the ascii value of '0' from the character to covert into string 
    }

    printf("%d", result);

    return 0;
}
