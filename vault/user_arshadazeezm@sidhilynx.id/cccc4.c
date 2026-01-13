#include <stdio.h>

int main()
{
 int given_number,reversed_number = 0,remainder_r,dummy_given;
 printf("Enter a number You Want to revrse : \n");
 scanf("%d",&given_number);
 dummy_given=given_number;
 if(given_number < 0){
     given_number=-given_number;
 }
 
 while(given_number != 0){
     remainder_r=given_number%10;
      reversed_number = reversed_number * 10 + remainder_r;
      given_number = given_number/10;
     
 }
 
 if(dummy_given == reversed_number){
     printf("The given number is pallindrome ! \n");
 }
 else{ printf("The given number is  not a pallindrome ! \n");
 }
 printf("Reversed number is %d",reversed_number);
    return 0;
}