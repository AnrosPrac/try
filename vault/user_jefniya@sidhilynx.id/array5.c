#include <stdio.h>
void sort(int a[],int n){int i,j,t;for(i=0;i<n-1;i++)for(j=0;j<n-i-1;j++)if(a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}}
int main(){
int n,i,j,maxCount=0,mode;
float mean,median;
printf("Enter number of elements: ");
scanf("%d",&n);
int a[n];
printf("Enter elements: ");
for(i=0;i<n;i++) scanf("%d",&a[i]);
sort(a,n);
int sum=0;
for(i=0;i<n;i++) sum+=a[i];
mean=(float)sum/n;
if(n%2==0) median=(a[n/2-1]+a[n/2])/2.0;
else median=a[n/2];
for(i=0;i<n;i++){
int count=1;
for(j=i+1;j<n;j++) if(a[j]==a[i]) count++; else break;
if(count>maxCount){maxCount=count;mode=a[i];}
i+=count-1;
}
printf("Mean: %.2f\nMedian: %.2f\nMode: %d",mean,median,mode);
return 0;
}