#include <stdio.h>
int main()
{
FILE *f;
f=fopen("file1.txt","a");
if(f==NULL)
{
return 1;
}
fprintf(f,"Appended line\n");
fclose(f);
return 0;
}