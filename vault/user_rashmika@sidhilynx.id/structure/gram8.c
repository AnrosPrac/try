#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle r)
{
    return r.length*r.breadth;
}
int main()
{
    struct Rectangle rect;
    
    printf("Enter length : ");
    scanf("%d",&rect.length);
    
    printf("Enter Breadth : ");
    scanf("%d",&rect.breadth);
    
    int a = area(rect);
    
    printf("\nArea of Rectangle = %d \n",a);
    
    return 0;
    
}