#include <stdio.h>

int main()
{
int a,b,c;
a=b=c=10;
/*Actually c assigns value from right to left so first c = 10 
and b = c and finally a = b .
Because of these behaviour all the three variables gets a same value */

printf("a : %d , b : %d , c : %d",a,b,c);

    return 0;
}
