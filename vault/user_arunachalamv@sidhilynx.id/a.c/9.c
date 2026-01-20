#include <stdio.h>
int main(){
    int a,b,c,result;
    scanf("%d%d%d",&a,&b,&c);
    result=a+b*c/a%b;
    printf("%d\n",result);
    return 0;
}
