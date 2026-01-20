#include <stdio.h>
#define ISUPPER(c) {if('Z'>=c)\
printf("it is in upper case ");\
else\
{printf("it is not in upper case ");}}
int main() {
char c;
printf("enter the character:\n");
scanf("%c",&c);

   ISUPPER(c); 
}