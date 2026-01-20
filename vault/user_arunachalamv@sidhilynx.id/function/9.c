#include <stdio.h>
int fact(int n)
{
if (n==0 || n==1){
return 1;
}
return n*fact(n-1);
}
int main()
{
int n;
printf("enter the value of n:");
scanf("%d",&n);
if(n<0){
 printf("the factorial cannot be determined for negative numbers");
}
else{
printf("the factorial of the number is %d",fact(n));
}
return 0;
}