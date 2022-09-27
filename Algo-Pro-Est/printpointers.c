#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    printf("x value: %i\n", x);
    printf("y value: %i\n", y);
    
    // Not fully correct, but suggested by the course.
    printf("x address: %x\n", &x);
    printf("y address: %x\n", &y);
}
