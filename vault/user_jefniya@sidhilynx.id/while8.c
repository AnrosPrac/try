#include <stdio.h>
int main() {
int n, i;
printf("Enter a number: ");
scanf("%d", &n);
printf("Multiplication Table of %d:\n", n);
for (i = 1; i <= 10; i++) {
printf("%d ", n * i);
}
return 0;
}

