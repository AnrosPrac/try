#include <stdio.h>

void main(){
    int entered_number = 0;
    unsigned long long factorial=1;
    printf("Enter a number to find the factorial : \n");
    scanf("%d",&entered_number);
    
    if(entered_number < 0){
        printf("Factorials does'nt support negative numbers ! \n");
    }
    else if(entered_number == 0){
        printf("The factorial is 1 \n");
        
    }
    else{
        for(int i =1;i<=entered_number;i++){
        factorial = factorial*i;
    }
    printf(" The factorial is %llu",factorial);
    }
    
}