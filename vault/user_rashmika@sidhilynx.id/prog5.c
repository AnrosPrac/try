#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,div;
    float mod;
    
    printf("Enter A and B value : ");
    scanf("%d%d",&a,&b);
    
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    
    printf("\nAddition is : %d",add);
     printf("\nsubtraction is : %d",sub);
     printf("\nMultiplication is : %d",mul);
     printf("\nDivision is : %d",div);
     printf("\nModulus is : %f",mod);
    
    if(b!=0)
    {
        printf("\ndivision : %d",div);
        printf("\nmodulus  : %f",mod);
    }
    else
    {
        printf("\nDivide and Modulus by Zero are not allowed");
    }
    return 0;
    
    
}
