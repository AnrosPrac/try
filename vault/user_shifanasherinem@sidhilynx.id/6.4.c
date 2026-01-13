#include<stdio.h>
#include<math.h>
void pri(int x)
{int c=0;
for(int i=2;i<=sqrt(x);i++)
{
if(x%i==0)
    c++;
}
 if(c==0)
     printf("the number is prime");
 else
     printf("the number is  not prime"); 
}
void main()
{
    int a;
     printf("enter a :\n");
scanf("%d",&a);
   pri(a);
   
}