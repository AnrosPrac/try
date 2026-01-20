#include <stdio.h>

struct Car {
    char brand[50];
    char model[50];
};

int main() {
    struct Car myCar;
    struct Car *carPtr;

    strcpy(myCar.brand, "Toyota");
    strcpy(myCar.model, "Camry");

    carPtr = &myCar;

    printf("Car Brand: %s\n", carPtr->brand);
    printf("Car Model: %s\n", carPtr->model);

    return 0;
}