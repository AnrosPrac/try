#include <stdio.h>

void main(){
    int table;
    printf("Enter a number : \n");
    scanf("%d",&table);
   
    printf(" // %d tables // \n",table);
    for (int i = 1;i<=10;i++){
        printf("%d * %d = %d \n",table,i,table*i);
    }
}