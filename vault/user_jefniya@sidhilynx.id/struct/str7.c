#include<stdio.h>
union Test{
int i;
float f;
};
int main(){
union Test t;
t.i=25;
printf("After assigning integer:\n");
printf("t.i=%d\n",t.i);
printf("t.f=%f\n",t.f);
t.f=12.5;
printf("After assigning float:\n");
printf("t.i=%d\n",t.i);
printf("t.f=%f\n",t.f);
return 0;
}