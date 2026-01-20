#include <stdio.h>
struct employee{
int id;
float salary;
};
int main()
{
struct employee e[5];
int i;
for(i=0;i<5;i++)
{
printf("enter the id and salary for employee %d",i+1);
scanf("%d%f",&e[i].id,&e[i].salary);
}
return 0;
}