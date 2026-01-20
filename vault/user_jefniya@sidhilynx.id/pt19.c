#include<stdio.h>
#include<stdlib.h>
int main(){
char *str,*p;
int n,len=0;
printf("Enter size of the string: ");
scanf("%d",&n);
str=(char *)malloc((n+1)*sizeof(char));
if(str==NULL){
printf("Memory not allocated.");
return 1;
}
printf("Enter the string: ");
scanf(" %[^\n]",str);
p=str;
while(*p!='\0'){
len++;
p++;
}
p=str+len-1;
printf("Reversed string: ");
while(p>=str){
printf("%c",*p);
p--;
}
free(str);
return 0;
}
