#include <stdio.h>
#include <math.h>
int main() {
float principal, rate, time, si, total, ci;
int n;
printf("Enter principal amount: ");
scanf("%f", &principal);
printf("Enter rate of interest (in %%): ");
scanf("%f", &rate);
printf("Enter time (in years): ");
scanf("%f", &time);
si = (principal * rate * time) / 100;
total = principal + si;
printf("Simple Interest = %.2f\n", si);
printf("Total Amount = %.2f\n", total);
printf("Enter number of times interest is compounded per year: ");
scanf("%d", &n);
ci = principal * pow((1 + rate / (100 * n)), n * time) - principal;
printf("Compound Interest = %.2f\n", ci);
return 0;
}
