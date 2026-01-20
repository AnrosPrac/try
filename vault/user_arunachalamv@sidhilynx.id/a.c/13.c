#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%2==0)
        printf("Even\n");
    else
        printf("Odd\n");
    if(num>0)
        printf("Positive\n");
    else if(num<0)
        printf("Negative\n");
    else
        printf("Zero\n");
    return 0;
}
