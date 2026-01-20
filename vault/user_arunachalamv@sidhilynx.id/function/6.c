#include <stdio.h>
int rev(int a)
{
    int rev=0,dig;
    while(a!=0){
        dig=a%10;
        rev=rev*10+dig;
        a=a/10;    
    }   return rev; 
}
int main()

{
    int n,reverse;
    printf("enter the number n:");
    scanf("%d",&n);
    reverse=rev(n);
    printf("the reversed number is %d",reverse);
    return 1;
}