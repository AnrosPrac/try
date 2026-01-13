#include <stdio.h>

int main()
{
  int x,y,reslt;
  printf("Enbter a Number : \n");
  scanf("%d",&x);
   printf("Enbter a Number : \n");
  scanf("%d",&y);
  reslt = (x>y) ? x-y:y-x*x;
  printf("Result : %d",reslt);
  

    return 0;
}
