#include <stdio.h>
int main(){
int n,i;
printf("Enter number of names: ");
scanf("%d",&n);
char names[n][50];
printf("Enter names:\n");
for(i=0;i<n;i++) scanf("%s",names[i]);
printf("List of names:\n");
for(i=0;i<n;i++) printf("%s\n",names[i]);
return 0;
}