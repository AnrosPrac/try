#include<stdio.h>

union Test
{
    int a;
    float b;
};
int main()
{
    union Test t;
    
    t.a = 10 ;
    printf("a = %d\n",t.a);
    
    t.b = 12.5;
    printf("b = %2f \n",t.b);
    
    printf("a after b assigned = %d \n",t.a);
    
    return 0;
}