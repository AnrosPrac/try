#include<stdio.h>

struct point
{
    int x;
    int y;
};
int main()
{
    struct point p={10,20};
    
    printf("x=%d, y=%d",p.x, p.y);
    
    return 0;
}