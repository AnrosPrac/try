#include<stdio.h>
void main()
{
float a,b,sum,dif,mul,div;
    
printf("enter a=\n");
scanf("%f",&a);
printf("enter b =\n");
scanf("%f",&b);
sum=a+b;
dif=a-b;
mul=a*b;
div=a/b;  
 if(b==0) 
 {
    printf("error"); 
 }
    else{printf(" %f\n",div);


}
    printf("%f\n %f\n %f\n",sum,mul,dif);}
