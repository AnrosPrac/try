#include <stdio.h>
int main(){
    int num,sum=0,count=0,digit,n;
    scanf("%d",&num);
    n = num<0?-num:num;
    while(n>0){
        digit = n%10;
        sum+=digit;
        count++;
        n/=10;
    }
    printf("Sum of digits=%d\n",sum);
    printf("Number of digits=%d\n",count);
    return 0;
}
