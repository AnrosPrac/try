#include <stdio.h>
#define PI 3.14
int reverse_number(int n);
int main()
{
	int a ;
	printf("Enter a number to check : \n");
	scanf("%d",&a);
int revreserd_number = reverse_number(a);
if(revreserd_number){
    printf("The entred number is a pallindrome !");
}
else{
     printf("The entred number is not a pallindrome !");
}
return 0;
}
int reverse_number(int n){
    int revresed = 0;
    int copy = n; 
    while(n != 0){
        int remainder_ = n % 10;
        revresed = (revresed *10 ) + remainder_ ;
        n = n/10;
    }
    if (revresed == copy){
        return 1;
    }
    else{
        return 0;
    }
}