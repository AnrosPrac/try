
#include <stdio.h>

void swap(int *x,int *y){
    int a=*x;
    int b = *y;
    *x = b;
    *y = a;
    printf("The first number is %d and the second number is %d",*x,*y);
}

int main()
{
  int a;int b;
  printf("Enter two numbers : \n");
  scanf("%d",&a);
  scanf("%d",&b);
  swap(&a,&b);

    return 0;
}