#include <stdio.h>
int Prime(int n);
int main(){
int num,result;
printf("Enter a number:");
scanf("%d", &num);
result = Prime(num);
if (result == 1)
printf("%d is a prime number",num);
else
printf("%d is not a prime number",num);
return 0;
}
int Prime(int n){
int i;
if (n<=1)
return 0;
for(i=2; i<=n/2; i++){
if(n % i == 0)
return 0;
}
return 1;
}