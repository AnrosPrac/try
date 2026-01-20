#include<stdio.h>
#include<stdlib.h>
int main(){
char *str;
int size;
printf("Enter size of the string: ");
scanf("%d",&size);
str=(char *)malloc((size+1)*sizeof(char));
if(str==NULL){
printf("Memory not allocated.");
return 1;
}
printf("Enter the string: ");
scanf(" %[^\n]",str);
printf("You entered: %s",str);
free(str);
return 0;
}
