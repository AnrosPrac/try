#include <stdio.h>
int main()
{
  float p,n,r,si;
  printf("enter the valur of p:");
  scanf("%f",&p);
  printf("enter the valur of n:");
  scanf("%f",&n);
  printf("enter the value of r:");
  scanf("%f",&r);  
  si=(p*n*r)/100;
  printf("si=%f",si);
  return 0;  
}