//2. Harmonic Series and Sum
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("1/%d ", i);
        sum += 1.0 / i;
    }
    printf("\n%.2f\n", sum);
    return 0;
}



