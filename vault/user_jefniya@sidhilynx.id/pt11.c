#include<stdio.h>
#include<ctype.h>
int main(){
char str[200];
char *ptr;
int vowels=0, consonants=0, digits=0, spaces=0;
printf("Enter a string:");
fgets(str, sizeof str, stdin);
ptr=str;
while(*ptr != '\0'){
if((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z')){
char ch=tolower(*ptr);
if(ch =='a' || ch =='e' || ch =='i' || ch=='o' || ch=='u')
vowels++;
else
consonants++;
}
else if(*ptr >= '0' && *ptr <= '9')
digits++;
else if(*ptr == ' ')
spaces++;
ptr++;
}
printf("Vowels:%d\n", vowels);
printf("Consonants:%d\n", consonants);
printf("Digits:%d\n", digits);
printf("Spaces:%d\n", spaces);
return 0;
}