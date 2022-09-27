#include <stdio.h>

int main(void) {
    // char name[16];
    // printf("Type a name: \n");
    // scanf breaks when sees a blank space. So only single words are allowed.
    // scanf("%s", name);
    // printf("Typed name: %s\n", name);

    // fgets
    char phrase[101];
    printf("Type a phrase: \n");
    fflush(stdin);
    fgets(phrase, 101, stdin);
    printf("Typed phrase: %s\n", phrase);
}
