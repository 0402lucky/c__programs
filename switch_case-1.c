//1. Menu-Driven Calculator
#include <stdio.h>

int main() {
    int a, b, choice;
    scanf("%d %d %d", &a, &b, &choice);

    switch (choice) {
        case 1: printf("%d\n", a + b); break;
        case 2: printf("%d\n", a - b); break;
        case 3: printf("%d\n", a * b); break;
        case 4: if (b != 0) printf("%.2f\n", (float)a / b); else printf("Division by zero\n"); break;
        default: printf("Invalid Choice\n");
    }

    return 0;
}
