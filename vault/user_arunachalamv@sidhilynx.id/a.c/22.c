#include <stdio.h>
int main(){
    int n,i,num;
    double sum=0,avg;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        sum+=num;
    }
    avg=sum/n;
    printf("Sum=%.2lf\n",sum);
    printf("Average=%.2lf\n",avg);
    return 0;
}
