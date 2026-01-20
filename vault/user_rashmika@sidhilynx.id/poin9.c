#include<stdio.h>
void copystring(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char src[100];
    char dest[50];
    
    printf("Enter A String : ");
    fgets(src,100,stdin);
    
    copystring(src, dest);
    
    printf("\nSource string : %s \n",src);
    printf("Copied String  : %s \n",dest);
    
    return 0;
    
}