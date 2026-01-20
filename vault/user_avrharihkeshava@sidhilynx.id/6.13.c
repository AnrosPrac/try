#include<stdio.h>
#include<math.h> 
int gcd(int a,int b)
{ 
if(b==0)
    return a;
    gcd(b,a%b);
}
int main()
{
int num1,num2,d;
printf("Program to find the gcd \n"); 
    printf("Enter two numbers:"); 
    scanf("%d %d",&num1,&num2);
printf("The gcd of the numbers is %d \n",gcd(num1,num2));
    return 0;
}

