int main() {
    int num, reversedNum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int tempNum = num; 

    while (tempNum != 0) {
        digit = tempNum % 10;
        reversedNum = reversedNum * 10 + digit;
        tempNum /= 10;
    }

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}