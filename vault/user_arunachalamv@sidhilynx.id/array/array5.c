#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    double sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    double mean=sum/n;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]>arr[j]){
                int t=arr[i]; arr[i]=arr[j]; arr[j]=t;
            }
    double median=(n%2==0)?(arr[n/2-1]+arr[n/2])/2.0:arr[n/2];
    int mode=arr[0],maxC=0;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++) if(arr[j]==arr[i]) c++;
        if(c>maxC){ maxC=c; mode=arr[i]; }
    }
    printf("%.2lf\n%.2lf\n%d\n",mean,median,mode);
    return 0;
}

