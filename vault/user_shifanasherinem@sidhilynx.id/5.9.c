#include<stdio.h>
void main()
{
char name[5][20];
printf("enter 5 names\n");
for(int i=0;i<5;i++)
{
scanf("%s",name[i]);
}
printf("the names you entered:");
for(int i=0;i<5;i++)
{
printf("%s",name[i]);
}
}
