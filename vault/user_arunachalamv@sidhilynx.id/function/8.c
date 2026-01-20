#include <stdio.h>
int num(int n)
{
if(n==0){
return 0;
}
num(n-1);
    printf("%d",n);
return 0;
}
int main()
{
int n;
printf("enter the value of n:");
scanf("%d",&n);    
num(n);   
return 0;
}