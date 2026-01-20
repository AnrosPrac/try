#include <stdio.h>

int main()
{
  int l,b,area,peri;
    printf("Enter l,b:");
  scanf("%d %d", &l, &b);
  area=l*b;
  printf("area=%d\n",area);
  peri=2*(l+b);
  printf("peri=%d\n",peri);
    
    return 0;
}