#include <stdio.h>
int main(){
int arr[5];
int i;
printf("Enter 5 numbers:\n");
for(i=0; i<5; i++){
scanf("%d", (arr+i));
}
printf("The entered numbers are:\n");
for(i=0; i<5; i++){
printf("%d", *(arr + i));
}
printf("\n");
return 0;
}