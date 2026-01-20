#include <stdio.h>
int main(){
    int i = 5;
    float f = 2.5, res;
    res = i/2 + f*2 - i%2;
    printf("Result = %f\n",res);
    return 0;
}
