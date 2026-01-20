#include <stdio.h>
struct rectangle{
int length,breadth;
};
int area(struct rectangle r){
return r.length*r.breadth;
}
int main()
{
struct rectangle rect={10,5};
printf("area=%d\n",area(rect));
return 0;
}