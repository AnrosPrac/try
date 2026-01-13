#include <stdio.h>

void main()
{
   int a,b,c,temp;
   printf("Enter the first number : \n");
   scanf("%d",&a);
    printf("Enter the second number : \n");
   scanf("%d",&b);
    printf("Enter the third number : \n");
   scanf("%d",&c);
   if(a>b){
       temp = a;
   }
   else if(b>a){
       temp = b;
   }
   else{
       temp = a;
   }
   if(temp >c){
       printf("The greates number is %d",temp);
   }
   else if(c>temp){
       printf("The greates number is %d",c);
       
   }
   else{
       printf("The greates number is %d",temp);
   }
}
