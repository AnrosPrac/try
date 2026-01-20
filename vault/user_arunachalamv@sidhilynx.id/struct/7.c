#include <stdio.h>
union test{int i;float f;};
int main(){
union test t;
t.i=10;
printf("integer:%d\n",t.i);
t.f=3.14;
printf("float:%.2f\n",t.f);
printf("now integer is overwritten:%d\n",t.i);
return 0;
}
