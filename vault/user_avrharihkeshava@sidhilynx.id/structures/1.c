#include<stdio.h>

struct student
{
char name[100];
int roll_no;
int marks;
};

void main()
{struct student b1;
printf("enter the name of the student:\n");
scanf("%s",&b1.name);
printf("enter the roll no and mark of the student:\n");
scanf("%d %d",&b1.roll_no,&b1.marks);
printf("name=%s\n",b1.name);
 printf("roll no=%d",b1.roll_no);
 printf("marks=%d",b1.marks);
}