#include <stdio.h>
#include <stdlib.h>
int main ()
{
char *str;
int size;
printf("enter the string size:\n");
scanf("%d",&size);
str=(char*)malloc((size+1)*sizeof(char));
printf("enter the string:\n");
scanf(" %[^\n]",str);
printf("entered strind is %s",str);
free(str);
return 0;
}
