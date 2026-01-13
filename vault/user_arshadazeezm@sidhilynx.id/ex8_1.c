
#include <stdio.h>

int addition(int x,int y);

int main()
{
    int a,b;
    printf("Enter a number : \n");
    scanf("%d",&a);
     printf("Enter a number : \n");
    scanf("%d",&b);
    int sum = addition(a,b);
    printf("The sum is %d",sum);

    return 0;
}


int addition(int x,int y){
    return x+y;
}