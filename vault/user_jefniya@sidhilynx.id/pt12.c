#include<stdio.h>
int main(){
char str1[200], str2[100];
char *p1, *p2;
printf("Enter first string:");
fgets(str1, sizeof str1, stdin);
printf("Enter second string:");
fgets(str2, sizeof str2, stdin);
p1=str1;
p2=str2;
while(*p1 != '\0'){
p1++;
}
while (*p2 != '\0'){
*p1=*p2;
p1++;
p2++;
}
*p1='\0';
printf("Concatenated string:%s",str1);
return 0;
}