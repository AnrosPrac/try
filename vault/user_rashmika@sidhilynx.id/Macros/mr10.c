#include <stdio.h>
#define INC(x) (++x)   
int inc_func(int x) 
{
    return ++x;
}
int main() {

    int i, result;

    i = 5;
    result = INC(i);
    printf("Macro Correct Use: i = %d, result = %d\n", i, result);

   printf("Using INC(i++) causes wrong behavior, so avoided.\n");


    i = 5;
    result = inc_func(i++);
    printf("Function Use: i = %d, result = %d\n", i, result);

    return 0;

}