#include<stdio.h>
struct employee
{
char name[100];
int salary;
}p[5];
void main()
{
printf("enter the names of the employees:\n");
for(int i=0;i<5;i++)
{
scanf("%s",&p[i].name);
}
printf("enter the salary of the employees:\n");
for(int i=0;i<5;i++)
{
scanf("%d",&p[i].salary);

}
for(int i=0;i<5;i++)
{
printf("name of person %d=%s\n",i+1,p[i].name);
printf("salary of person %d=%d\n",i+1,p[i].salary);

}
}