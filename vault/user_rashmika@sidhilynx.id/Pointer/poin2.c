#include<stdio.h>
void compare(int *a,int *b)
{
    if (*a > *b)
        printf("%d is Greater than than %d \n",*a,*b);
    else if (*a < *b)
        printf("%d is Smaller than %d \n",*a,*b);
    else
        printf("Both Numbers are Equal.\n");
}
int main()
{
    int x,y;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&x,&y);
    
    compare(&x,&y);
    return 0;
}