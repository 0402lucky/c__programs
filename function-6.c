//6. Sum of the Series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 Using Function
#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

float sum_series() {
    float sum = 0;
    for (int i = 1; i <= 5; i++)
        sum += (float)factorial(i) / i;
    return sum;
}

int main() {
    printf("%.2f\n", sum_series());
    return 0;
}
