#include <stdio.h>
struct student{
int roll;
char name[50];
};
int main()
{
struct student s;
printf("enter the student roll number:");
scanf("%d",&s.roll);
printf("enter the student name:");
scanf("%s",&s.name);
printf("student roll number:%d\n",s.roll);
printf("student name:%s\n",s.name);
return 0;
}