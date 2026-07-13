#include <stdio.h>

int main() {
    // Variables
    int a = 5, b = 3, d = 10;
    float pi = 3.22, height = 7.1;
    char grade = 'A';

    // Integer operations
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;

    // Float operation
    float area = pi * height;

    // Print values and results
    printf("The value of d is %d\n", d);
    printf("Grade: %c\n", grade);

    printf("\nInteger operations:\n");
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, difference);
    printf("%d * %d = %d\n", a, b, product);
    printf("%d / %d = %d\n", a, b, quotient);

    printf("\nFloat operation:\n");
    printf("%.2f * %.1f = %.2f\n", pi, height, area);

    return 0;
}