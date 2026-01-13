#include <stdio.h>
#define ISUPPER(c) ((c)>='A' && (c)<='Z')
int main() {
    char ch;
    scanf("%c", &ch);
    if(ISUPPER(ch)) printf("Uppercase");
    else printf("Not uppercase");
}
