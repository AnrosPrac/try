#include<stdio.h>
struct Attendance{
unsigned int mon : 1;
unsigned int tue : 1;
unsigned int wed : 1;
unsigned int thu : 1;
unsigned int fri : 1;
};
int main(){
struct Attendance a={1,0,1,1,0};
printf("Mon=%d Tue=%d Wed=%d Thu=%d Fri=%d", a.mon, a.tue, a.wed, a.thu, a.fri);
return 0;
}