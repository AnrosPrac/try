#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char *str;
 int len,i;
 
 str = (char*)malloc(100*sizeof(char));
 printf("Enter a String : \n");
 gets(str);
 
 len = strlen(str);
 printf("Reversed String : \n");
 for(i = len -1;i>=0;i--){
     printf("%c",*(str+i));
     
    
 }
 
  
   free(str);
   
    return 0;
}