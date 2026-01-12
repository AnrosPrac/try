#include <stdio.h>

void main(){
  for (int i = 1;i<=5;i++){\
      printf("\n");
      printf(" // %d TABLE // \n",i);
      printf("\n");
      for(int j = 1;j<=10;j++){
          printf("  %d * %d = %d \n",i,j,i*j);
      }
  }
}