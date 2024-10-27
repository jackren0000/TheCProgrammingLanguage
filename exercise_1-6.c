// C is not a 'big' language, and is not well served by a big compiler

#include <stdio.h>

int main() {
    printf("Please enter any sentences:\n");
    printf("result:\n %d", getchar() != EOF);
}