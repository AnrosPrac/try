#include <stdio.h>
#include<math.h>
#define MAX(a,b) a>b?a:b
int main() {
int r,s;
    printf("enter the two numbers :\n");
    scanf("%d %d",&r,&s);
int t=MAX(r,s);
    printf("max of the two=%d",t);
}