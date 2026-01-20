#include <stdio.h>
int main()
{
    float prin,rate,time,simple,ci,total;
    
    printf("Enter Principle amount,rate,time : ");
    scanf("%f %f %f",&prin,&rate,&time);
    
    simple=(prin*rate*time)/100;
    total=prin+simple;
    ci=prin*(1+rate/100,100*total);
        
    printf("Simple Interest  : %f \n",simple);
    printf("Total Amount     : %f \n",total);
    printf("Compound interest: %f \n",ci);
    
    return 0;
}
