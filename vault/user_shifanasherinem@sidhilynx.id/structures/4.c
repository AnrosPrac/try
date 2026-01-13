#include<stdio.h>
typedef struct
{
int day;
int month;
int year;
}date;
void main()
{
date today;
printf("enter the day:\n");
scanf("%d",&today.day);
printf("enter the month:\n");
scanf("%d",&today.month);
printf("enter the year:\n");
scanf("%d",&today.year);
printf("date=%d/%d/%d",today.day,today.month,today.year);
}