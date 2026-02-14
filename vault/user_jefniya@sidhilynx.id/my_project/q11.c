int main() {
    int sum = 0;
    int count = 1;

    while (count <= 10) {
        sum = sum + count;
        count = count + 1;
    }

    printf("The sum of the first 10 natural numbers is: %d\n", sum);

    return 0;
}