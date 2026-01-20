#include<stdio.h>
#include<math.h>
void main()
{
int l,b,perimeter,area,dia;
printf("enter l=");
scanf("%d",&l);
printf("enter b=");
scanf("%d",&b);
perimeter = 2*(l+b);
area=l*b;
printf("perimer=%d\n",perimeter);
printf("area=%d\n",area);
 dia=sqrt(pow(l,2)+pow(b,2));
    printf("dia=%d\n",dia);
}