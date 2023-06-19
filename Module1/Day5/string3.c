#include <stdio.h>
#include<string.h>

int main()
{
    int n=8;
    printf("Enter the time as 'HH:MM:SS' format : ");
    char str[8];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }
    char* token;
    char* dlm = ":";
    token = strtok(str,dlm); // breaks the hh,mm,ss separately 
    char *tokens[3];
    int numtok = 0;
    while( token != NULL ) {
        
     tokens[numtok] = token; // stores the separted val in 'tokens'
     numtok++;    
     token = strtok(NULL, dlm);
   }
    // below code just to check our tokens are separated 
   /*  for(int i=0;i<3;i++)
   {
       
       printf("%s\n",tokens[i]); 
   }
   */ 
   
   int hour = atoi(tokens[0]);
   int minute = atoi(tokens[1]);
   int second = atoi(tokens[2]);
    
   int res = hour*3600 + minute*60 +second;
   
   printf("the total seconds is %d",res);

    return 0;
}
