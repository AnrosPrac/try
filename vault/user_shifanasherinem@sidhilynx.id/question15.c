#include<stdio.h>
void main()
{
int a,b,c,max;
printf("enter a= \n");
scanf("%d",&a);
printf("enter b= \n");
scanf("%d",&b);
printf("enter c= \n");
scanf("%d",&c);
max =a;
if (b>max)
{
    max=b;
}

 if(c>max){
     max=c;
 }


printf("max = %d",max);


}