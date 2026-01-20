#include <stdio.h>
int main()
{
    int arr[5],*p;
    printf("enter the numbers");
    for(p=arr;p<arr+5;p++)
    {
        scanf("%d",p);
    }
    printf("the numbers:");
        for(p=arr;p<arr+5;p++)
        {
            printf("%d\n",*p);
        }
    return 0;
}