#include <stdio.h>

int main()
{
   int x;
   printf("Enter a number : \n" );
   scanf("%d",&x);
   if(x %2 == 0 && x!=0){
       printf("The given number is EVEN ! \n");
       
   }
   else if(x%2 != 0  && x!=0){
       printf("The given number is ODD ! \n");
   }
   else{
    printf("The given number is neither ODD nor EVEN ! \n");   
     printf("The given number is ZERO ! \n");
   }
   if(x>0){
        printf("The given number is POSITIVE ! \n");
   }
   else if(x<0 && x != 0) {
        printf("The given number is NEGATIVE ! \n");
   }

    return 0;
}
