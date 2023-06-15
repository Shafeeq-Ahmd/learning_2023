
#include<stdio.h>

int main () {

// Student grade program

int marks;

printf("Enter the mark of the student ");

scanf("%d", &marks);

if( marks >= 90  && marks  <=  100)
{
 printf("Grade A");
}

else if( marks >= 75  && marks  <= 89)
 
{
 printf("Grade B");
}


else if(marks >= 60  && marks  <= 74)
{
 printf("Grade C");
}
else if(marks >= 50  && marks  <= 59)
{
 printf("Grade D");
}
else if(marks >= 0  && marks  <= 49)
{
 printf("Grade F");
}

return 0;

}
