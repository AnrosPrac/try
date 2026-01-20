#include <stdio.h>
#define PI 3.14
float areaofcircle(float radius);
int main(){
float r, area;
printf("Enter radius:");
scanf("%f", &r);
area=areaofcircle(r);
printf("Area of circle:%f",area);
return 0;
}
float areaofcircle(float radius){
return PI * radius * radius;
}