#include <stdio.h>
#define RATE 10
int main()
{
    printf("rate=%d\n",RATE);
    #undef RATE
    #define RATE 20
    printf("rate=%d\n",RATE);
    return 0;
}