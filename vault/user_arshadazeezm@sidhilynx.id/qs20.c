#include <stdio.h>

int addition(int x, int y);
int multiplication(int x, int y);
int subtraction(int x, int y);
int division(int x, int y);
int modulus(int x, int y);

int main() {
    int a, b, m;
    int op;

    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("Enter a number: \n");
    scanf("%d", &b);
    printf("Enter the operation (0->add, 1->sub, 2->mul, 3->div, 4->modulus): \n");
    scanf("%d", &op);

    switch (op) {
        case 0:
            m = addition(a, b);
            printf("%d\n", m);
            break;
        case 1:
            m = subtraction(a, b);
            printf("%d\n", m);
            break;
        case 2:
            m = multiplication(a, b);
            printf("%d\n", m);
            break;
        case 3:
            if (b != 0) {
                m = division(a, b);
                printf("%d\n", m);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 4:
            if (b != 0) {
                m = modulus(a, b);
                printf("%d\n", m);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Unsupported format !\n");
            break;
    }
    
    return 0;
}

int addition(int x, int y) {
    return x + y;
}

int subtraction(int x, int y) {
    return x - y;
}

int multiplication(int x, int y) {
    return x * y;
}

int division(int x, int y) {
    return x / y;
}

int modulus(int x, int y) {
    return x % y;
}
