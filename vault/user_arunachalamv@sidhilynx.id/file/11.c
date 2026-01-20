#include <stdio.h>
#include <time.h>
int main()
{
FILE *f;
time_t t;
t=time(NULL);
f=fopen("log.txt","a");
fprintf(f,"%s User: Arun Action: Login\n",ctime(&t));
fclose(f);
return 0;
}