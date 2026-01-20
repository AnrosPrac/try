#include <stdio.h>
#include <string.h>
void reverse(char str[],int i,int n){
if(i>=n) return;
char temp=str[i];
str[i]=str[n];
str[n]=temp;
reverse(str,i+1,n-1);
}
int main(){
char str[100];
printf("Enter a string: ");
scanf("%s",str);
reverse(str,0,strlen(str)-1);
printf("Reversed string: %s",str);
return 0;
}