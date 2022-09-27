#include <stdio.h>

int main() {
    float height[3] = {1, 1.5, 1.7};
    printf("%f %f %f\n", height[0], height[1], height[2]);

    float weight[3];
    weight[0] = 55.5, weight[1] = 94.3, weight[2] = 75.66;
    printf("%f %f %f\n", weight[0], weight[1], weight[2]);

    int age[3];
    for (int i = 0; i < 3; i++) {
        printf("Digite uma idade:\n");
        scanf("%i", &age[i]);
    }
    printf("%i %i %i\n", age[0], age[1], age[2]);

    float age_avg = (age[0] + age[1] + age[2]) / 3.0;
    printf("The average age is %.2f\n", age_avg);
}
