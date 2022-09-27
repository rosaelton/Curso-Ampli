#include <stdio.h>

int main(void) {
    float grades_sum;
    int grades_count;
    
    while (1) {
        printf("Insert grade: \n");
        float grade = 0.0;
        scanf("%f", &grade);
        
        grades_sum += grade;
        grades_count++;

        int should_continue = 0;
        printf("Continue? (1/0): ");
        scanf("%i", &should_continue);
        if (!should_continue) {
            break;
        }
    }

    float avg = grades_sum / grades_count;
    printf("The average of this class is: %.2f\n", avg);
}
