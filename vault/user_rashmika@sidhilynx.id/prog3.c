#include<stdio.h>
int main()
    
{
    float cel,fah,kel;
    
    printf("Enter temperature in Celsius : ");
    scanf("%f",&cel);
    
    fah=(9*cel)/5+32;
    
    printf("Celsius to Fahrenheit:%f\n",fah);
    
    kel=5*(fah-32)/9+273.15;
    
    printf("Temperature in kelvin:%f",kel);
}