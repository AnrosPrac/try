#include <stdio.h>
#include <math.h>
int prime(int a )
{
    if(a<=1){
        return 0;
    }
    int i;
    for(i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
        return 1;
    
}
int main()
{
    int x,pri;
    printf("enter the number:");
    scanf("%d",&x);
  pri=prime(x);
  if(pri==1)
  {
      printf("%d is a prime number",x);
  }
  else{
      printf("it is not a prime number");
  }
}