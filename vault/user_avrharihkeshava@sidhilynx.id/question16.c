#include<stdio.h>
void main()
{
int a,b,c,max;
printf("enter a=");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);
printf("enter c=");
scanf("%d",&c);
if(a>b && a>c)
{
printf(" a is large");
}
else if (b>a && b>c)
{printf(" b is large");

}
else 
{printf(" c is large");

}


}