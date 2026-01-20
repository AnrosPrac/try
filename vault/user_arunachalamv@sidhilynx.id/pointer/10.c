#include <stdio.h>
#include <string.h>
int main(){
    char str[100], rev[100];
    char *p1, *p2;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    p1 = str + strlen(str) - 1;
    p2 = rev;
    while(p1 >= str){
        *p2 = *p1;
        p2++;
        p1--;
    }
    *p2 = '\0';
    printf("Reversed string: %s", rev);
    return 0;
}
