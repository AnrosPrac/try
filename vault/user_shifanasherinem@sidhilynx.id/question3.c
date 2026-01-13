#include<stdio.h>
void main()
{
float f,c,k;
printf("enter c=\n");
scanf("%f",&c);
f=(9/5*c)+32;
printf("f=%f\n",f);
k=((f-32)*5/9)+273.15;
printf("k=%f\n",k);
}