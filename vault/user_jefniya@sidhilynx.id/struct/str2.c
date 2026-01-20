#include <stdio.h>
struct Point{
int x;
int y;
};
int main(){
struct Point p={10,20};
printf("x=%d\n", p.x);
printf("y=%d\n", p.y);
return 0;
}