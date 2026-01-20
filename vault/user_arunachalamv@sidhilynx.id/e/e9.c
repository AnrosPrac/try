#include<stdio.h>
int main(){
int i,j,n,limit;
printf("Enter the number for which you want the multiplication table:");
scanf("%d",&n);
printf("Enter the limit (how far you want the table to go):");
scanf("%d",&limit);
for(j=1;j<=limit;j++){
printf("%d x %d = %d\n",n,j,n*j);
}
return 0;
}
