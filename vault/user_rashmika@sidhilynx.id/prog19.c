#include<stdio.h>
int main()
{
    int a=5,b=0;
    
    if(a&b)
    {
        printf("Both Values Are Non Zero.....\n");
    }
    else
    {
        printf("One Of The Value Is Zero....\n");
    }
    if(a>0 && b>0)
    {
        printf("Both Values Are Greater Than Zero....\n");
    }
    else 
    {
        printf("One Value Is Zero.....\n");
    }
}