#include <stdio.h>
struct Student
{
char name[50];
int roll;
float marks;
};
int main()
{
struct Student s;
FILE *f;
f=fopen("students.dat","wb");
struct Student s1={"Arun",1,95.5};
fwrite(&s1,sizeof(s1),1,f);
fclose(f);
f=fopen("students.dat","rb");
fread(&s,sizeof(s),1,f);
printf("%s %d %.2f\n",s.name,s.roll,s.marks);
fclose(f);
return 0;
}