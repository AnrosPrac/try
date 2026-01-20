#include<stdio.h>
int main()
{
    int rows,n=1;
    
    printf("Enter Number of rows for Floyd's triangle : ");
    scanf("%d",&rows);
    
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d  ",n++);
        }
        printf("\n\n");
    }
    return 0;
}
