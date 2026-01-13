#include <stdio.h>
#define MAXLENGTH 25
void stringPropertiesCounter(char *str){
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;
    char *string = str;
    
    while(*string != '\0'){ 
        
        char c = *string;
        
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                   
                vowels++;
            }
            else {
                consonants++;
            }
        }
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            spaces++;
        }

        string++;
       
    }
     spaces--;
    printf("--- Analysis Results ---\n");
    printf("Vowels:     %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits:     %d\n", digits);
    printf("Spaces:     %d\n", spaces);
}

int main() {
    char str[MAXLENGTH];
    
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    printf("Original: %s", str);
    stringPropertiesCounter(str);
    
    return 0;
}