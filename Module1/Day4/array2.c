
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
    int s, *arr;
   
    printf("Enter the size of array : ");
    
    scanf("%d",&s);
    // used dynamic allocation, for my self practice
    arr = (int*)malloc(s*sizeof(int));
    
    printf("Enter the elements of the array : ");
    for(int i=0;i<s;i++)
    {
        
     scanf("%d",&arr[i]);

    }
    
    int min = arr[0] , max = arr[0];
    
    for(int i =0; i<s ;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        
        if(min > arr[i])
        {
            min = arr[i];
        }
        
    }

   
    
    printf("The maximum is %d and the mininum is %d", max, min);

    return 0;
}
