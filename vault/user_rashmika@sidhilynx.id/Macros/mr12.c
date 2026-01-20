#include <stdio.h>
#define LOG(msg) printf("Line %d: %s\n", __LINE__, msg)
int main()
{
    LOG("Program started");

    int x = 10;

    if (x > 5) 
    {
        LOG("x is greater than 5");
    } 
    else
    {
        LOG("x is 5 or less");
    }
    LOG("Program ended");

    return 0;
}