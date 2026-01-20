#include<stdio.h>
int main()
    
{
    int a,b,c,largest;
    
    printf("Enter Three Numbers :");
    scanf("%d %d %d",&a,&b,&c);
    
    largest=(a>b)?((a>c)?a:c):((b>c)?:c);
    
    printf("Largest of %d, %d,and %d is : %d\n",a,b,c,largest);
    
    return 0;
}