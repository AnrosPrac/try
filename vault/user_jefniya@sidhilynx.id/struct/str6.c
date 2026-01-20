#include<stdio.h>
enum Week{
MON, TUE, WED, THU, FRI, SAT, SUN
};
int main(){
enum Week day;
day=FRI;
printf("Value of FRI=%d\n",day);
return 0;
}