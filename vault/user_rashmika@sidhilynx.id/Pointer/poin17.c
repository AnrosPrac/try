#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str;
    int n;
    
    printf("Enter The size of the string :  ");
    scanf("%d",&n);
    
    str = (char*)calloc(n+1,sizeof(char));
    
    printf("Enter a String : ");
    for(int i = 0; i < n ; i++)
    {
        scanf(" %c",(str+i));
    }
    printf("Inputed String : %s\n",str);
   
}