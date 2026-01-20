#include <stdio.h>

int main() {
    int number,sum=0,digit;
    
    printf("enter a number:");
    scanf("%d",&number);
    
    while(number!=0){
        digit=number%10;
        sum+=digit;
        number/=10;
        }
    printf("sum of the digits of the number:%d",sum);
    return 0;
}