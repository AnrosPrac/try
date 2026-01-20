#include <stdio.h>
#include <string.h>
int revstr(char str[], int index)
{
if(index<0){
return 0;
}
printf("%c",str[index]);
revstr(str,index-1);
}
int main()
{
char str[100];
printf("enter a string:\n");
scanf("%s",&str);
printf("the reversed string is\n");
revstr(str,strlen(str)-1);
return 0;
}