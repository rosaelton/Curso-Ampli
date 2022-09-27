#include <stdio.h>

int main(void) {
    int grades[3][5];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            grades[i][j] = i + j;
        }
    }
}
