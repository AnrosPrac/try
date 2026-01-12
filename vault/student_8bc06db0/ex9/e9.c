#include <stdio.h>
#define SWAP(a,b,temp) temp=a; a=b; b=temp;
int main() {
    int x, y, t;
    scanf("%d %d", &x, &y);
    SWAP(x, y, t)
    printf("%d %d", x, y);
}
