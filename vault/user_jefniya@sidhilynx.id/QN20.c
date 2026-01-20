#include <stdio.h>
int main()
{
 int a,b,choice;
 printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);
 
 printf("1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide\n 5.Modulus\n");
 printf("Enter Choice");
 scanf("%d", &choice);
 
 switch(choice) {
 case 1: printf("Sum = %d\n", a+b); break;
 case 2: printf("Difference = %d\n", a-b); break;
 case 3: printf("Product = %d\n", a*b); break;
 case 4: if(b !=0) printf("Quotient = %d\n", a/b);
         else printf("Division by zero!\n"); break;
 case 5: if(b !=0) printf("Modulus = %d\n", a%b);
         else printf("Division by zero!\n"); break;
 default: printf("Invalid choice!\n");
 
 }
}