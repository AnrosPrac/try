#include<stdio.h>
#include<math.h>
void main()
{
float p,n,r,si,ci;
printf("enter p=\n ");
scanf("%f",&p);
printf("enter n=\n ");
scanf("%f",&n);
printf("enter r=\n");
    scanf("%f",&r);
    si=p*r*n/100;
        printf("si=%f\n",si);
    ci=(p*pow(1+r/100,n));
    printf("ci=%f\n",ci);
}