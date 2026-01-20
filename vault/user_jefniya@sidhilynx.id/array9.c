#include <stdio.h>
int main(){
int n,i;
printf("Enter number of strings: ");
scanf("%d",&n);
char str[n][100];
printf("Enter strings:\n");
for(i=0;i<n;i++) scanf("%s",str[i]);
printf("You entered:\n");
for(i=0;i<n;i++) printf("%s\n",str[i]);
return 0;
}