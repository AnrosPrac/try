#include <stdio.h>

int main()
{
    int n = 0;
    float mark,average,temp,sum = 0.0;
    printf("Enter the number of students : \n");
    scanf("%d",&n);
    
    for(int i = 1;i<=n;i++){
        printf("Enter mark %d : ",i);
        scanf("%f",&temp);
        sum=sum+temp;
        
        
    }
    average=sum/n;
    printf("Average is %f",average);
    
  

    return 0;
}