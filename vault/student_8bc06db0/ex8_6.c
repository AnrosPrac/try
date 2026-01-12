
#include <stdio.h>


int reverse_number(int n);
int main()
{
int a ;
printf("Enter a number to reverse : \n");
scanf("%d",&a);
int revreserd_number = reverse_number(a);
printf("The reversed number is %d",revreserd_number);

return 0;
}


int reverse_number(int n){
    int revresed = 0;
    
    while(n != 0){
        int remainder_ = n % 10;
        revresed = (revresed *10 ) + remainder_ ;
        n = n/10;
    }
    return revresed;
}