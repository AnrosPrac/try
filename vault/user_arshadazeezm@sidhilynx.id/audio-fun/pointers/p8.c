
#include <stdio.h>
#define MAXLENGTH 25


int counter(char *str){
    int res = 0;
    while(*str != 0){
        
        if(*str == '\n'){
            break;
        }
        res++;
        str++;
    }
    return res;
}
int main()
{
    
    char str[MAXLENGTH];
    printf("Enter the string to find its length : \n");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s", str);
    int output = counter(str);
    printf("The length the string entered is : %d \n",output);
    return 0;
}
