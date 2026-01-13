
#include <stdio.h>
#include <math.h>
float simpleintrest(float p,float r,float t);
float totalAmount(float p,float r,float t);
float compoundIntrest(float p,float r,float t,float n);
int main()
{
    float a,p,r,t;
    int n,op;
   printf("For simple intrest enter 0 For total amount enter 1 for compound intrest enter 2 \n");
   scanf("%d",&op);
   
   if(op == 0){
       printf("Enter the principle amount : \n");
       scanf("%f",&p);
        printf("Enter the annual intrest rate : \n");
       scanf("%f",&r);
        printf("Enter the time(in years) : \n");
       scanf("%f",&t);
       a=simpleintrest(p,r,t);
       printf("The simple intrest is %f",a);
   }
   else if(op == 1){
        printf("Enter the principle amount : \n");
       scanf("%f",&p);
        printf("Enter the annual intrest rate : \n");
       scanf("%f",&r);
        printf("Enter the time(in years) : \n");
       scanf("%f",&t);
       a=totalAmount(p,r,t);
        printf("The total amount is %f",a);
   }
    else if(op == 2){
          printf("Enter the principle amount : \n");
       scanf("%f",&p);
        printf("Enter the annual intrest rate : \n");
       scanf("%f",&r);
        printf("Enter the time(in years) : \n");
       scanf("%f",&t);
         printf("Enter the number of times compounded per year : \n");
       scanf("%f",&n);
        
    }
    return 0;
}
float simpleintrest(float p,float r,float t){
    return p*r*t;
}

float totalAmount(float p,float r,float t){
    return p*(1+r*t);
}
float compoundIntrest(float p,float r,float t,float n){
    return p * pow(1+r/n,n*t);
}