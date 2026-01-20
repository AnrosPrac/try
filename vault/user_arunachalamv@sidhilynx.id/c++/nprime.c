#include <stdio.h>
int main()
{
    int n,num,count=0,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    num=2;
 while(count<n)
 {
     int prime=1;
     for(i=2;i<num;i++)
 {
 if(num%i==0)
 {
    prime=0;
    break;
 }
 }
 if(prime==1)
 {
    printf("%d\n",num);
    count++;
 }
 num++;
 }
 return 0;
}