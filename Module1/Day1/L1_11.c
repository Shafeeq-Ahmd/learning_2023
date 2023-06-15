
#include<stdio.h>

int main(){

 int a,b;

  printf("Enter two numbers : ");
  scanf(" %d %d ",&a, &b);
  if(a>b)
  {
   printf(" the first number : %d , is greater  than second number : %d", a,b);	
 }
  else if(a<b)
{
  printf(" the second  number : %d , is greater  than first  number : %d", b,a);
}

return 0;

}


