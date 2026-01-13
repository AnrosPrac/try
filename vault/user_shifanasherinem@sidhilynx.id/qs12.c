#include<stdio.h>
int main() {
    int fact=1;
    
    int n;
    printf("Enter A Number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++) {
        fact=fact*i;
    }
    
    printf("Fatorial Of %d is %d\n",n,fact);
}