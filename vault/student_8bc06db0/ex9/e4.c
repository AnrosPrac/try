#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", MAX(x,y));
}
