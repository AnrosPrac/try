#include <stdio.h>
int main()
{
FILE *f;
double temp,min=1e9,max=-1e9,sum=0;
int count=0;
f=fopen("sensor.txt","r");
if(f==NULL)
{
return 1;
}
while(fscanf(f,"%lf",&temp)==1)
{
if(temp<min)min=temp;
if(temp>max)max=temp;
sum+=temp;
count++;
}
fclose(f);
printf("Min=%.2f Max=%.2f Avg=%.2f\n",min,max,(count?sum/count:0));
return 0;
}