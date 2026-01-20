#include <stdio.h>
void compare(int *a, int *b){
if (*a > *b)
printf("First number is greater than second\n");
else if(*a < *b)
printf("First number is smaller than second\n");
else
printf("Both are equal\n");
}
int main(){
int num1, num2;
printf("Enter two numbers:");
scanf("%d %d", &num1, &num2);
compare(&num1, &num2);
return 0;
}