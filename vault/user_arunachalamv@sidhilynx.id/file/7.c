#include <stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int b[5];
FILE *f;
f=fopen("array.bin","wb");
fwrite(arr,sizeof(int),5,f);
fclose(f);
f=fopen("array.bin","rb");
fread(b,sizeof(int),5,f);
for(int i=0;i<5;i++)
{
printf("%d ",b[i]);
}
fclose(f);
return 0;
}