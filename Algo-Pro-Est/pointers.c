#include <stdio.h>

int main() {
    int year = 2018;
    int *pointer_to_year = &year;
    printf("Pointer: %p\n", pointer_to_year);
    printf("Pointer to pointer: %p\n", &pointer_to_year);
    
    // Pointers and arrays
    int num[3] = {10, 20, 30};
    printf("Using index: %d\n", num[0]);
    printf("Using pointer: %d\n", *num);
    // Maybe the pointer which points to first element is the same as of the
    // entire array?
    int *pt_first_element = &num[0];
    int *pt_entire_array = (int *) num;
    printf("Pointer to first element: %p\n", pt_first_element);
    printf("Pointer to entire array: %p\n", pt_entire_array);

    // pointer arithmetic
    printf("First element via pointer incrementing: %d\n", *num);
    printf("Second element via pointer incrementing: %d\n", *(num + 1)); 
    printf("Third element via pointer incrementing: %d\n", *(num + 2)); 

    printf("First element using address arithmetic: %d\n", *pt_first_element);
    printf("Second element using address arithmetic: %d\n",*(pt_first_element + 1));
   
    // Pointer incrementing
    printf("Pointer: %p\n", pointer_to_year);
    printf("Pointer incremented by 1: %p\n", pointer_to_year + 1);
}
