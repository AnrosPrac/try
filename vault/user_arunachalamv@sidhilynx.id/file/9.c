#include <stdio.h>
struct Customer
{
int acc;
char name[50];
double bal;
};
int main()
{
struct Customer c;
FILE *f;
f=fopen("cust.bin","wb");
struct Customer c1={1,"Ram",1000};
fwrite(&c1,sizeof(c1),1,f);
fclose(f);
f=fopen("cust.bin","rb");
fread(&c,sizeof(c),1,f);
printf("%d %s %.2f\n",c.acc,c.name,c.bal);
fclose(f);
return 0;
}