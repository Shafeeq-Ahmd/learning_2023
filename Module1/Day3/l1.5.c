

#include <stdio.h>

int main()
{
   
   printf("Enter the number of elements :");
   int n;
   scanf("%d",&n);
   int arr[n];
   printf("Enter the individual elements :");
   for(int i = 0 ; i<n ; i++)
   {
       scanf("%d", &arr[i]);
   }
   
   
   for(int i =0; i<n ; i++)
   {
       if(arr[i] < 10 )
       {
           printf("Invalid\n");
           
       }
       else 
       
       {
                 int num, rem = 0 ,large = 0, small;
   
  		 num = arr[i];
   
		   small = num;
   
  		 while(num>0)
  		 {
      		 rem = num % 10;
       
      		 if(large < rem)
      		 {
          		 large = rem;
      		 }
       
       
       
      		 if(small > rem)
       		{
          	 small = rem;
       		}
       
      		 num = num/10;
  		 }
   
  		 printf("%d and %d\n",large,small);
           
      		 }
  		 }

    return 0;
}
