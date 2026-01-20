#include<stdio.h>
int main()
    
{
    int a,b;
    char choice;
    
    printf("Enter The Number1 : ");
    scanf("%d",&a);
    
     printf("Enter The Number2 : ");
     scanf("%d",&b);
    
    printf("Enter The Options of the Symbols : (+  -  *  /  %) ");
    scanf(" %c", &choice);
    
    switch(choice)     
    {
        case '+' :
            printf("\nAddition  : %d ",a+b);
            break;
            
         case '-' :
            printf("\nSubtraction  : %d ",a-b);
            break;
            
         case '*' :
            printf("\nMultiplication  : %d ",a*b);
            break;
            
         case '/' :
            if(b!=0)
                printf("\nDivision : %d ",a/b);
            else
                printf("\nDivision by Zero is not allowed...");
            break;
            
         case '%' :
            printf("\nRemainder  : %d ",a%b);
            break;
            
        default:
            printf("\nEnter The Given Symbol.....");
            
    }
    return 0;
}