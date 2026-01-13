#include <stdio.h>


void main(){
    char lettor;
    printf("Enter a ALPHABET : ");
    scanf("%s",&lettor);
    switch(lettor){
        case 'a':
            printf("IT IS A VOWEL !");
            break;
        case 'e':
            printf("IT IS A VOWEL !");
            break;
        case 'i':
            printf("IT IS A VOWEL !");
            break;
        case '0':
            printf("IT IS A VOWEL !");
            break;
        case 'u':
            printf("IT IS A VOWEL !");
            break;
        default:
            printf("IT IS A CONSTANT !");
    }
}