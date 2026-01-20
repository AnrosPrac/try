#include<stdio.h>

int main() {
    printf("Enter a Number:");
    int n;
    scanf("%d",&n);
    
    int prime=1;
    
    for(int i=2;i<n;i++) {
        if(n%i==0) {
            printf("Not a Prime Number\n");
            prime=0;
            break;
        }
    }
    if(prime) 
        printf("Prime Number\n");

}