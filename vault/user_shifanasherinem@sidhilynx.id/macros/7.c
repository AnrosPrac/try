#include <stdio.h>
#define RATE 10
int main() {
int t;
t=RATE;
printf("before=%d\n",t);
#undef RATE
#define RATE 20
t=RATE;
printf("after=%d\n",t);    
}