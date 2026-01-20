#include <stdio.h>
#include <ctype.h>
int main(){
char str[200],*ptr;
int vowels=0,consonants=0,digits=0,spaces=0;
printf("Enter a string: ");
fgets(str,sizeof(str),stdin);
ptr=str;
while(*ptr!='\0'){
if(*ptr==' '||*ptr=='\n')spaces++;
else if(isdigit(*ptr))digits++;
else if(isalpha(*ptr)){
char ch=tolower(*ptr);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')vowels++;
else consonants++;
}
ptr++;
}
printf("Vowels:%d\nConsonants:%d\nDigits:%d\nSpaces:%d",vowels,consonants,digits,spaces);
return 0;
}
