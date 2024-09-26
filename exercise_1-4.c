// the position of braces is less important,
// although people hold passionate beliefs
// exercise 1-4
#include <stdio.h>

int main() {
    float fahr; // declaration
    float celsius[] = {-17.8, -6.7, 4.4, 15.6, 26.7, 37.8, 48.9, 60.0, 71.1, 82.2}; // definition

    printf("Celsius\tFahrenheit\n");
    for (int i = 0; i < 10; ++i) {
        fahr = (9.0/5.0) * celsius[i] + 32.0;
        printf("%6.1f %3.0f\n", fahr, celsius[i]);
    }
}