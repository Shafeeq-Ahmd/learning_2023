#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int num;
    printf("Enter the Element count: ");
    scanf("%d",&num);
    arr = (int*)malloc(num * sizeof(int));
    
    printf("Enter the array elements: ");
    for(int i = 0; i<num; i++)
    {
        
        scanf("%d",&arr[i]);
    
    }    
    
    int sum;
    
    for(int i = 0; i<num; i= i + 2)
    {
        sum = sum + arr[i];
    }
     
    free(arr);
    
    printf("The Sum of alternate elements is %d",sum);

    
    return 0;
}

