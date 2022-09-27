#include <stdio.h>

int main(void) {
    // char nome[16] = {'t', 'e', 's', 't', 'e'};
    char nome[16] = "teste";
    for (int i = 0; i < 16; i++) {
        if (nome[i] == 0) {
            printf("0\n");
        } else if (nome[i] == '\0') {
            printf("End\n");
        } else {
            printf("%c\n", nome[i]);
        }
    }

    if (0 == '\0') {
        printf("Zero");
    }
}
