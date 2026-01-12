#include <stdio.h>
#define FTOC(f) ((f-32)*5/9)
int main() {
    float f;
    scanf("%f", &f);
    printf("%.2f", FTOC(f));
}
