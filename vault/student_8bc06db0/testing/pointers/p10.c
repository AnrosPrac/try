#include <stdio.h>
#define MAXLENGTH 25

void reverse_string(char *str){
    char *start =str;
    char *end = str;
    char temp;
    
    while(*end != '\0'){
        end++;
    }
    end--;
    
    while(start<end){
         temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[MAXLENGTH];
 

    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    printf("Original: %s", str);
    reverse_string(str);
    printf("Reversed: %s", str);
    


    return 0;
}
