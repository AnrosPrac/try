#include <stdio.h>
int main()
{
FILE *src,*dest;
char ch;
src=fopen("file1.txt","r");
dest=fopen("backup.txt","w");
if(src==NULL||dest==NULL)
{
return 1;
}
while((ch=fgetc(src))!=EOF)
{
fputc(ch,dest);
}
fclose(src);
fclose(dest);
return 0;
}