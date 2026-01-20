#include <stdio.h>
int main()
{
 float f,c,k;
 printf("enter the value of c:");
 scanf("%f",&c);
 f=(c*9/5)+32;
 printf("f=%f\n",f);
 k=((f-32)*5/9)+273.15;
 printf("k=%f\n",k);
 return 0;
}