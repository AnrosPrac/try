#include <stdio.h>
int main()
{
  int i,n;
  printf("enter a number:");
  scanf("%d",&n);
  
  int prime=1;
  for(i=1;i<=n-1;i++){
     if(n%i==0)
     prime=0;
  }
  if(prime) printf("the given number is not a prime");
  else printf("the given number is a prime number");
  return 0;
}