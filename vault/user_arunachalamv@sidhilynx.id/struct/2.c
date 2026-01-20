#include <stdio.h>
struct point{
int x,y;
};
int main()
{
struct point p={10,20};
printf("point coordinates:x=%d,y=%d\n",p.x,p.y);
return 0;
}