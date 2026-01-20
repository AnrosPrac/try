#include<stdio.h>
#include <string.h>

void rev(char str[],int index)
{
if(index<0)
return ;
printf("%c",str[index]);
return(rev(str,(index-1)));
}
void main()
{
char str[50];
printf("enter the string:\n");
fgets(str,sizeof str,stdin);
rev(str,strlen(str)-1);
}