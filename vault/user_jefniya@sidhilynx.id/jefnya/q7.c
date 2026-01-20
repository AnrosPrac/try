#define RATE 10
#include <stdio.h>
int main() {
printf("%d\n", RATE);
#undef RATE
#define RATE 20
printf("%d\n", RATE);
return 0;
}