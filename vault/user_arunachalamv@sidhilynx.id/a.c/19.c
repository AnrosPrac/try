#include <stdio.h>
int main(){
    int a=0,b=1,c=1;
    if(a && ++b)
        printf("Logical AND: True\n");
    else
        printf("Logical AND: False\n");
    printf("b=%d\n",b);
    if(a & ++c)
        printf("Bitwise AND: True\n");
    else
        printf("Bitwise AND: False\n");
    printf("c=%d\n",c);
    return 0;
}
