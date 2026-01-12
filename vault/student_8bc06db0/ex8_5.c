#include <stdio.h>
#define PI 3.14
float AreaOfCircle(int r);
int main()
{
int a ;
printf("Enter The radius of the circle : \n");
scanf("%d",&a);
float area = AreaOfCircle(a);
printf("The area of the circle is %.2f",area);

return 0;
}
float AreaOfCircle(int r){
    float Area = PI * r *r;
    return Area;
    
}