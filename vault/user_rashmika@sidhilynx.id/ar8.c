#include <stdio.h>

int main() 
{
    char names[][20] = {
        "Guna",
        "Ragav",
        "Siva",
        "Dhiya",
        "Ethan"
    };

    int count = sizeof(names) / sizeof(names[0]);

    printf("List of names:\n");
    for (int i = 0; i < count; i++) 
    {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}