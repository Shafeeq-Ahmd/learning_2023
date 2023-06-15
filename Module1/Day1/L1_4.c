#include<stdio.h>

int main()
{
    
    float op1,op2;
    char opr;
    float res;
    
    printf("Enter Number1 : ");
    scanf("%f", &op1);
    printf("Enter Operator : ");
    scanf(" %c", &opr);
    printf("Enter Number2 : ");
    scanf("%f", &op2);
    
    switch(opr)
    {
        case '+' :
        res = op1 + op2;
        break;
        
        case '-' :
        res = op1 - op2;
        break;
        
        case '/' :
        res = op1 / op2;
        break;
        
        case '*' :
        res = op1 * op2;
        break;
        
        
        default : 
        printf("Operation not supported");
        break;
        
    }
    
    printf("The Output for selected Operataion is %f", res);
    
}
