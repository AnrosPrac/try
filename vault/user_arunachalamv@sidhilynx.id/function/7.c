#include <stdio.h>
int rev(int a)
{
    int rev=0,dig,y;
    y=a;
    while(a!=0){
        dig=a%10;
        rev=rev*10+dig;
        a=a/10;
    }  
    if (y==rev){
    printf("the given number is a palindrome");
    }
    else{
        printf("the given number is not a palindrome");
    }
    return rev;
}
int main()

{
    int n,reverse;
    printf("enter the number n:");
    scanf("%d",&n);
    reverse=rev(n);
}