#include <stdio.h>
int main()
{
FILE *f;
f=fopen("file1.txt","w");
if(f==NULL)
{
return 1;
}
fprintf(f,"Hello World\n");
fclose(f);
return 0;
}