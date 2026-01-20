#include <stdio.h>
void square(int *n){
*n = (*n) * (*n);
}
int main(){
int num;
printf("Enter a number:\n");
scanf("%d", &num);
square(&num);
printf("Square:%d",num);
return 0;
}