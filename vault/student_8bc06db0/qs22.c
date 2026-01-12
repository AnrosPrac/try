#include <stdio.h>

void main()
{
    int n,num,avg,i;
    int sum = 0;
    printf("How many numbers you want to find : \n");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++ ){
        printf("Enter number %d : \n",i);
        scanf("%d",&num);
        sum = sum +num;
        
    }
    avg = sum/n;
    printf("Sum is %d and Average is %d",sum,avg);
    
}
