#include<stdio.h>

int main() {
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    printf("Multiplication Table for %d\n",n);
    
    for(int i=1;i<11;i++) {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
    printf("\n");
    return 0;
}