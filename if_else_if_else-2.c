//2. Electricity Bill Calculation
#include <stdio.h>

int main() {
    int id, units;
    char name[50];
    float charge, total;
    scanf("%d %s %d", &id, name, &units);

    if (units <= 199)
        charge = units * 1.20;
    else if (units < 400)
        charge = units * 1.50;
    else if (units < 600)
        charge = units * 1.80;
    else
        charge = units * 2.00;

    if (charge > 400)
        charge += charge * 0.15;
    if (charge < 100)
        charge = 100;

    printf("Customer ID: %d\nName: %s\nTotal Amount: %.2f\n", id, name, charge);
    return 0;
}
