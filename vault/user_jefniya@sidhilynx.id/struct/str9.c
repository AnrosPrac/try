#include<stdio.h>
struct Car{
char brand[20];
char model[20];
};
int main(){
struct Car c={"Toyota","Innova"};
struct Car *ptr;
ptr=&c;
printf("Brand: %s\n", ptr->brand);
printf("Model:%s\n",ptr->model);
return 0;
}