#include <stdio.h>

struct car {
    char model[24];
    int year;
    float value;
};

int main(void) {
    struct car my_car = { "civic", 2000, 10000.32 };
    printf("%s %i %.2f\n", my_car.model, my_car.year, my_car.value);
}
