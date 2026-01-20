#include<stdio.h>
void main()
{
int i,a,k;
  int rev=0;
printf("enter i=\n");
scanf("%d",&i);
    k=i;
while(i>0){
    a=i%10;
    rev=(rev*10)+a;
    i=i/10;
}if(k==rev)
{
printf(" the number is palandromic");
}
    else
    {
        printf(" the number is not palandromic");
    }
   
}