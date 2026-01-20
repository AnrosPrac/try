#include <stdio.h>
#include <string.h>
int main() {
char s1[100], s2[100];
int i, flag = 0;
printf("Enter first string: ");
if (fgets(s1, sizeof(s1), stdin))
s1[strcspn(s1, "\n")] = '\0'; 
printf("Enter second string: ");
if (fgets(s2, sizeof(s2), stdin))
s2[strcspn(s2, "\n")] = '\0';  
for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
if(s1[i] != s2[i]) {
flag = 1;
break;
}
}
if(flag == 0 && s1[i] == '\0' && s2[i] == '\0')
printf("Strings are equal\n");
else
printf("Strings are not equal\n");
return 0;}
