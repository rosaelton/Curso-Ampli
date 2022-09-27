#include <stdio.h>

#define CLIENT_NAME_SIZE 100

struct movie {
    int age_rating;
    int available;
};

struct client {
    char name[CLIENT_NAME_SIZE];
    int age;
};

int main(void) {
    struct client cli;

    struct movie mv;

    printf("Insert client's name:\n ");
    fflush(stdin);
    fgets(cli.name, CLIENT_NAME_SIZE, stdin);

    printf("Insert client's age:\n ");
    scanf("%i", &cli.age);

    printf("Insert movies age rating:\n");
    scanf("%i", &mv.age_rating);

    printf("Is the movie available:\n");
    scanf("%i", &mv.available);
    if (cli.age >= mv.age_rating && mv.available){
        printf("%s is allowed to buy this movie.\n", cli.name);
    } else {
        printf("%s is not allowed to buy this movie.\n", cli.name);
    }
}
