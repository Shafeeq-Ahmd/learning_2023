
#include<stdio.h>
#include<string.h>


struct student
{

 int rrn;
 char name[20];
 int phy,math,chem;
 float total,perc;

};

int main() {



int num;

printf("Enter the number of students :  ");

scanf("%d", &num);

struct student s[num];

printf("Enter the student details\n ");

for(int i=0 ; i<num ; i++)
{

  printf("Enter rrn ");
  scanf("%d", &s[i].rrn);

 printf("Enter name : ");
 //fgets(s[i].name, 20, stdin);
 scanf(" %[^\n]s", s[i].name);

   printf("Enter physics Marks : ");
  scanf("%d", &s[i].phy);

  printf("Enter Maths Marks ");
  scanf("%d", &s[i].math);
  printf("Enter Chemistry Marks ");
  scanf("%d", &s[i].chem);
};

for(int i=0 ; i<num ; i++)
{
    s[i].total = s[i].phy + s[i].math +s[i].chem;
    s[i].perc = (s[i].total /300) * 100; 
}

for(int i=0 ; i<num ; i++)
{

printf("\n----- Student Summary -----\n");
    printf("Roll No: %d\n", s[i].rrn);
    printf("Name: %s\n", s[i].name);
    printf("Physics Marks: %.d\n",s[i].phy);
    printf("Math Marks: %d\n", s[i].math);
    printf("Chemistry Marks: %d\n", s[i].chem);
    printf("Total Marks: %.2f\n",   s[i].total);
    printf("Percentage: %.2f%%\n",  s[i].perc);
 
}
}

