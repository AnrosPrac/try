#include<stdio.h>
#include<math.h>

#define pi 3.14
float area(float r)
{
float y;
y=pi*pow(r,2);
return(y);
}
void main()
{
float a,b;
printf("enter the radius:");
scanf("%f",&a);
b=area(a);
printf("area=%f",b);

}