#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char *str,*rev;
int len;
printf
("enter a string:\n");
str=(char*)malloc(100*sizeof(char));
scanf("%[^\n]",str);
len=strlen(str);
rev=(char*)malloc((len+1)*sizeof(char));
char *p=str+len-1;
char *q=rev;
while(p>=str)
{
*q=*p;
q++;
p--;

}
*q='\0';
printf("reversed string is %s",rev);
free(str);
free(rev);
return 0;
}

