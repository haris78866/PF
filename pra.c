#include <stdio.h>

int main() {
    int ascii_values[] = {72, 65, 82, 73, 83};  // ASCII values of 'H', 'A', 'R', 'I', 'S'

    for (int i = 0; i < 5; i++) {
        printf("%c", ascii_values[i]);
    }

    printf("\n");

    return 0;
}

