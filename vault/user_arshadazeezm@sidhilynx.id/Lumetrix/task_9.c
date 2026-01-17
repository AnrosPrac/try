#include <stdio.h>

struct Car {
    char brand[50];
    char model[50];
};

int main() {
    struct Car myCar;
    struct Car *carPtr;

    carPtr = &myCar;

    printf("Enter car brand: ");
    scanf("%s", carPtr->brand);

    printf("Enter car model: ");
    scanf("%s", carPtr->model);

    printf("\nCar Details:\n");
    printf("Brand: %s\n", carPtr->brand);
    printf("Model: %s\n", carPtr->model);

    return 0;
}