#include <stdio.h>
struct Record
{
int id;
char name[20];
};
int main()
{
struct Record r;
FILE *f;
int n=2;
f=fopen("records.bin","rb");
fseek(f,(n-1)*sizeof(r),SEEK_SET);
fread(&r,sizeof(r),1,f);
printf("%d %s\n",r.id,r.name);
fclose(f);
return 0;
}