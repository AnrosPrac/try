#include <stdio.h>
#include<math.h>
#define FTOC(x) ((5)*(x-32))/9
int main() {
float r;
    printf("enter the temperature in fahrenheit:\n");
    scanf("%f",&r);
float t=FTOC(r);
    printf("temperature in celcius=%f",t);

    
}