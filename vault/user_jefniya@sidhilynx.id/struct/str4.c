#include<stdio.h>
typedef struct{
int day;
int month;
int year;
}Date;
int main(){
Date today={19, 11, 2025};
printf("Date: %02d-%02d-%d\n", today.day, today.month, today.year);
return 0;
}