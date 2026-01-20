#include <stdio.h>
int main(){
int n,i,even=0,odd=0;
printf("Enter number of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter elements: ");
for(i=0;i<n;i++) scanf("%d",&arr[i]);
for(i=0;i<n;i++){
if(arr[i]%2==0) even++;
else odd++;
}
printf("Even numbers: %d\nOdd numbers: %d",even,odd);
return 0;
}