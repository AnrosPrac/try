#include <stdio.h>
int largest(int x, int y);
int main(){
int a,b,result;
printf("Enter two numbers:");
scanf("%d %d", &a, &b);
result=largest(a,b);
printf("Largest of two numbers:%d",result);
return 0;
}
int largest(int x, int y){
if(x>y)
return x;
else
return y;
}