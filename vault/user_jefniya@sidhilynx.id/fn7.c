#include <stdio.h>
int Palindrome(int n);
int main(){
int num, result;
printf("Enter a number:");
scanf("%d", &num);
result = Palindrome(num);
if (result == 1)
printf("%d is a palindrome", num);
else
printf("%d is not a palindrome", num);
return 0;
}
int Palindrome(int n){
int org=n;
int rev=0, digit;
while(n != 0){
digit = n % 10;
rev = rev * 10 + digit;
n=n/10;
}
if(org == rev)
return 1;
else
return 0;
}