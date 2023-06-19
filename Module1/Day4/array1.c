
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
    int s, *arr;
    int sum=0,avg;
    printf("Enter the size of array :");
    scanf("%d",&s);
    // used dynamic allocation, for my self practice
    arr = (int*)malloc(s*sizeof(int));
    
    printf("Enter the elements of the array :");
    for(int i=0;i<s;i++){
        
     scanf("%d",&arr[i]);

    }

    for(int i=0;i<s;i++){
        
        sum = sum + arr[i];
    }
    
    avg = sum / s;
    
    printf(" The sum is %d and the average is %d", sum, avg);

    return 0;
}
