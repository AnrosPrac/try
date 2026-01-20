#include <stdio.h>
int main(){
int arr[5];
int *ptr;
int i;
ptr = arr;
printf("Enter 5 integers:\n");
for (i=0; i<5; i++){
scanf("%d", ptr + i);
}
printf("Entered integers are:\n");
for(i=0; i<5; i++){
printf("%d", *(ptr + i));
}
printf("\n");
return 0;
}