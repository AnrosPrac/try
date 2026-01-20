#include <stdio.h>
int reverse(int n);
int main(){
int num, rev;
printf("Enter a number:");
scanf("%d", &num);
rev = reverse(num);
printf("Reversed number:%d",rev);
return 0;
}
int reverse(int n){
int rev = 0, digit;
while (n != 0){
digit = n % 10;
rev = rev * 10 + digit;
n=n/10;
}
return rev;
}