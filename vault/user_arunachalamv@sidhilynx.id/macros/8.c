#include <stdio.h>
#define ISSUPPER(c) ((c)>='A' && (c)<='Z')
int main()
{
    char a;
    printf("enter the character:\n");
    scanf("%c",&a);
    if(ISSUPPER(a))
    {
        printf("the given character is  upper case");
    }
    else{
        printf("the given character islower  case");
    }
    return 0;
}