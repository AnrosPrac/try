#include<stdio.h>
int main()
{
    int n, num = 2, count = 0, i;
    printf("Enter the Number N :");
    scanf("%d",&n);
    
    while(count<n)
    {
        int prime = 1;
        
        for (i=2;i<num; i++)
        {
            if(num % i==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
        {
            printf("%d\n",num);
            count++;
        }
        num++;
    }
    
    return 0;   
}
