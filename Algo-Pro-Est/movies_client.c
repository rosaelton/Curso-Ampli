#include <stdio.h>

#define CLIENT_NAME_SIZE 100

struct client {
    char name[CLIENT_NAME_SIZE];
    int age;
};

int main(void) {
    struct client cli;
    int movie_age_rating;

    printf("Insert client's name:\n ");
    fflush(stdin);
    fgets(cli.name, CLIENT_NAME_SIZE, stdin);

    printf("Insert client's age:\n ");
    scanf("%i", &cli.age);

    printf("Insert movies age rating:\n");
    scanf("%i", &movie_age_rating);

    if (cli.age >= movie_age_rating){
        printf("%s is allowed to buy this movie.\n", cli.name);
    } else {
        printf("%s is not allowed to buy this movie.\n", cli.name);
    }
}
