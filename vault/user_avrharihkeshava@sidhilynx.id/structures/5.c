#include<stdio.h>
struct attendence
{
unsigned int m:1;
unsigned int t:1;
unsigned int w:1;
unsigned int th:1;
unsigned int f:1;
}s;
void main()
{
struct attendence s={1,0,0,1,1};
printf("attendence:\n");
printf("monday=%s\n",s.m?"present":"absent");
printf("tuesday=%s\n",s.t?"present":"absent");
printf("wednesday=%s\n",s.w?"present":"absent");
printf("thursday=%s\n",s.th?"present":"absent");
printf("friday=%s\n",s.f?"present":"absent");
}