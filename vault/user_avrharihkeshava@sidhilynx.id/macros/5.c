#include <stdio.h>
#include<math.h>
#define RECT_AREA(l,b) l*b
int main() {
int r,s;
    printf("enter the length and breadth :\n");
    scanf("%d %d",&r,&s);
int t=RECT_AREA(r,s);
    printf("Area =%d",t);
}