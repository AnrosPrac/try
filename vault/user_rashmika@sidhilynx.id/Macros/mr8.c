#include <stdio.h>
#define ISUPPER(c) ((c) >= 'A' && (c) <= 'Z') 
int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ISUPPER(ch))
    {
        printf("%c is an Uppercase character.\n", ch);
    } 
    else 
    {
        printf("%c is NOT an Uppercase character.\n", ch);
    }

    return 0;

}