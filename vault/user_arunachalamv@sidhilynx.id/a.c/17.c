#include <stdio.h>
int main(){
    int x,y,result;
    scanf("%d%d",&x,&y);
    result = (x>y) ? x-y : y-x*x;
    printf("Result=%d\n",result);
    return 0;
}
