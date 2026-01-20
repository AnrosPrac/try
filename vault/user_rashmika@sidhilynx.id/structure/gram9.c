#include<stdio.h>

struct Car
{
     char brand[20];
     int model;
};
int main()
{
    struct Car c = {"Toyota",2024};
    struct Car *ptr = &c;
    
    printf("Brand = %s\n",ptr->brand);
    printf("Model = %d\n",ptr->model);
    
    return 0;
}