#include<stdio.h>
int main()
    
{
    int l,b,area,peri;
    
    printf("Enter length and breadth :");
    scanf("%d %d",&l,&b);
    
    area = l*b;
    peri=2*(l+b);
    
    printf("The area of the rectangle is  :%d",area);
    printf("\nThe Perimeter of the rectangle is :%d",peri);

}
