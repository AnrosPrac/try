#include<stdio.h>
int main(){
char str1[100], str2[100];
char *src=str1;
char *dest=str2;
printf("Enter a string:");
fgets(str1,sizeof str1,stdin);
while(*src != '\0'){
*dest = *src;
src++;
dest++;
}
*dest = '\0';
printf("Copied string:%s\n",str2);
return 0;
}