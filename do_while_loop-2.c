//2. Compound Interest Calculation
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, ci;
    char choice;
    do {
        scanf("%f %f %f", &principal, &rate, &time);
        amount = principal * pow((1 + rate / 100), time);
        ci = amount - principal;
        printf("Compound Interest: %.2f\n", ci);
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    return 0;
}

