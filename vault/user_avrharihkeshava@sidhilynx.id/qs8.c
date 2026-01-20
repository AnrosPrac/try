#include<stdio.h>
void main()
{
int i,a;
  int rev=0;
printf("enter i=\n");
scanf("%d",&i);
while(i>0){
    a=i%10;
    rev=(rev*10)+a;
    i=i/10;
}
    printf("%d",rev);
}