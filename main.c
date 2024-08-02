#include <stdio.h>

int main() {
    float n;
    printf("enter a number: ");
    scanf("%f", &n);

    if (n == (int)n) {
        printf("integer\n");
    } else {
        printf("float\n");
    }

    return 0;
}


