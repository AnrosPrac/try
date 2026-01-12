#include <stdio.h>

long long factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main()
{
    
    int a ;
    printf("Enter a Number : \n");
    scanf("%d",&a);
    
    long long result = factorial(a);
    printf("%d",result);

    return 0;
}
