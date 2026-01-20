#include <stdio.h>

int main() 
{
    int n;
    char names[100][50]; 

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); 

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("String %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d. %s", i + 1, names[i]);
    }

    return 0;
}