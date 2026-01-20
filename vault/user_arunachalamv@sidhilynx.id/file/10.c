#include <stdio.h>
struct Book
{
int id;
char title[50];
int issued;
};
int main()
{
struct Book b;
FILE *f;
f=fopen("lib.bin","wb");
struct Book b1={101,"C Programming",0};
fwrite(&b1,sizeof(b1),1,f);
fclose(f);
f=fopen("lib.bin","rb");
fread(&b,sizeof(b),1,f);
printf("%d %s %d\n",b.id,b.title,b.issued);
fclose(f);
return 0;
}