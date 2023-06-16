
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a four digit number: ");
    scanf("%d",&n);
    
    int a[4];
    
     a[0] = (n / 1000)*100 + (n % 100);
     a[1] = ( n /100)*10 + ( n % 10 );
     a[2] = (n % 1000);
     a[3] = (n /10);
     
    int max = 0;
    
    
    for(int i = 0 ; i < 4 ; ++i)
    {
        if ( max < a[i] )
        {
            max = a[i]; 
        }
    }
    printf("\n The largest number after deleting a digit is   %d ", max);
    return 0;
}
