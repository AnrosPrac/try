#include <stdio.h>

int main()
{
    /* The program below is to understand the && operator */
    
    int a = 10;
    int b = 20;
    if(a == 1 && b++){
       
    }
     printf("Now b is %d \n",b);
     /* by this we can clearly understand that if the first 
     statement inside the if statements is false then the
     second statement will not be executed*/
    
    if(a == 10 & b++){
        
    }
     printf("Now b is %d",b);
     int c = 5&&4;
     printf("%d",c);
    /* by ths we can clearly understand this even if the first
    statement is false the second statement will be executed*/
    
    return 0;
}