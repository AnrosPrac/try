#include<stdio.h>
int main(){
char str[]="pointer";
char *p=str;
int length=0;
while(*p!='\0'){
length++;
p++;
}
printf("Length=%d\n",length);
return 0;
}
