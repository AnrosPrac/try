#include <stdio.h>
typedef struct{
int day,month,year;
}date;
int main()
{
date d={11,12,13};
printf("date=%d-%d-%d\n",d.day,d.month,d.year);
return 0;
}