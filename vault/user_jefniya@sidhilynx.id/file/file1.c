#include<stdio.h>
#include<stdlib.h>
int main(void){
FILE *fp=fopen("message.txt","w");
if(!fp){
perror("fopen");
return 1;
}
fprintf(fp,"Hello! This is a simple message.\n");
fclose(fp);
printf("message.txt created and written.\n");
return 0;
}