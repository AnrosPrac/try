#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fp = fopen ("max.txt","w");
    if(!fp)
    {
        perror("fopen");
        return 1;
    }
    fprintf(fp,"Hello! This is my first code. \n");
    fclose(fp);
    printf("max.txt created and written. \n");
    return 0;
}