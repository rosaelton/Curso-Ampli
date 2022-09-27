#include <stdio.h>

int main(void) {
    int x = 0;
    int y = 0;

    // Preincrement
    int result1 = x++;
    printf("Post-increment (x++) result: %i\n", result1);
    
    int result2 = ++y;
    printf("Pre-increment (++x) result: %i\n", result2);
}
