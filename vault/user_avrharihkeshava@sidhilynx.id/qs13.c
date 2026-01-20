#include<stdio.h>

int main() {
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    
    int a=0,b=1;
    int f;
    
    for(int i=0;i<n;i++) {
        if(i==1 || i==0) {
            f=i;
        }
        else {
            f=a+b;
            a=b;
            b=f;
        }
        printf("%d\t",f);
    }
    printf("\n");
}