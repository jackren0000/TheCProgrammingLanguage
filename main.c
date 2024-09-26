// variables must be declared before using
// exercise 1-3

#include <stdio.h>

int main(void) {
    float fahr, celsius; // declaration
    int lower, upper, step;

    lower = 0; // definition
    upper = 300;
    step = 20;

    fahr = lower; // expression statement
    while (fahr <= upper) {
        celsius = 5.0 / 9.0 * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
