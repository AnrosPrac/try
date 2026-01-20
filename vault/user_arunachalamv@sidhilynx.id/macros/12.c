#include <stdio.h>
#define LOG(msg) printf("Line %d: %s\n", __LINE__, msg) 
int main()
{
    LOG("abcdefghijklmnopqrstuvwxyz");
    LOG("programming in C");
    LOG("anna university");
    return 0;
}