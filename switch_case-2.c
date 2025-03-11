//2. Compute Area of Shapes
#include <stdio.h>

int main() {
    int choice;
    float a, b, area;
    scanf("%d", &choice);

    switch (choice) {
        case 1: scanf("%f", &a); area = 3.14 * a * a; break;
        case 2: scanf("%f %f", &a, &b); area = a * b; break;
        case 3: scanf("%f %f", &a, &b); area = 0.5 * a * b; break;
        default: printf("Invalid Choice\n"); return 0;
    }

    printf("Area = %.2f\n", area);
    return 0;
}
