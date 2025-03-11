//1. Largest of Five Numbers
#include <stdio.h>

int main() {
    int a, b, c, d, e, max;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;

    printf("Largest Number: %d\n", max);
    return 0;
}
