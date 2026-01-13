#include <stdio.h>
#define LOG(msg) printf("Line %d: %s\n", __LINE__, msg) 
int main()
{
    LOG("hari is studying");
    LOG("programming in C");
    LOG("anna university");
    return 0;
}