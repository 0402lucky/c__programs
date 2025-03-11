//1. Determine n Based on m's Value
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    if (m > 0)
        n = 1;
    else if (m == 0)
        n = 0;
    else
        n = -1;
    printf("%d\n", n);
    return 0;
}
