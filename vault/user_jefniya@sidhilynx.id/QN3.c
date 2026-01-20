#include <stdio.h>

int main()
{
    float cel,fah,kel;
    printf("Enter the values of Cel and Fah:\n");
    scanf("%f %f", &cel, &kel);
    fah=(cel*9/5)+32;
    printf("Fah=%f\n",fah);
    kel=cel+273;
    printf("Kel=%f",kel);
    

    return 0;
}