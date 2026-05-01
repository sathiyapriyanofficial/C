#include <stdio.h>
#include <unistd.h>

enum days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

typedef enum { false, true } bool;

int main() {
    int a = 0;

    int is_even = false;

    printf("Enter a number: ");
    scanf("%d", &a);

    if(a % 2 == 0) {
        is_even = true;
    } 

    if (is_even) {
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }

    printf("You entered: %d\n", a);

    return 0;
}