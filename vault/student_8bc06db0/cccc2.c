#include <stdio.h>

int main()
{
    int number,sum=0,digits;
    printf("Enter a Number : \n");
    scanf("%d",&number);
    if(number < 0){
        number = -number;
    }
    while(number != 0){
        digits = number%10;
        sum= sum+digits;
        number = number/10;
    }
    printf("The digits is %d",sum);
    return 0;
}
