#include <stdio.h>

int main()
{
   float a,b,sum,diff,mul,div,rem;
   printf("Enter the numbers a,b:");
   scanf("%f %f",&a,&b);
   sum=a+b;
   diff=a-b;
   mul=a*b;
   div=a/b;
   
   printf("Sum=%f\n",sum);
   printf("Diff=%f\n",diff);
    printf("Mul=%f\n",mul);
    printf("Div=%f\n",div);
    
    return 0;
}