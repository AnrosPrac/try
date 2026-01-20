#include<stdio.h>

enum Days
{
   MON = 1 , TUE, WED, THU, FRI, SAT, SUN 
};
int main()
{
    enum Days d = FRI ;
    
    printf("Value of FRI = %d ",d);
    
    return 0;
}