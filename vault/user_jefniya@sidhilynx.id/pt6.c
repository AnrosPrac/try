#include <stdio.h>
int sumarray(int *arr, int n){
int sum=0;
for(int i=0; i<n; i++){
sum += *(arr +i);
}
return sum;
}
int main(){
int arr[5], i;
printf("Enter 5 numbers:\n");
for(i=0; i<5; i++){
scanf("%d", (arr + i));
}
int total = sumarray(arr,5);
printf("Sum of the array elements:%d\n",total);
return 0;
}