int main() {
    int number1;
    int number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    if (number1 > number2) {
        printf("The largest number is: %d\n", number1);
    } else {
        printf("The largest number is: %d\n", number2);
    }

    return 0;
}