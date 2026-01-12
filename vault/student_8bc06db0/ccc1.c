#include <stdio.h>

void main(){
    int a = 0;
    while(a<=20){
       if(a%2 == 0 && a != 0){
           printf("%d is a EVEN number ! \n",a);
          
       }
      
       a++;
    }
}