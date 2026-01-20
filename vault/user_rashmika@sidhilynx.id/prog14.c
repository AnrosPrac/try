#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter A Number : ");
    scanf("%d",&num);
    
    if(num%3==0 && num%5==0)
        {
        printf("%d is Divisible by Both 3 and 5...",num);
        }
     
     else
         {
         printf("%d is Not Divisible by Both 3 and 5...",num);
         }
         return 0;
}