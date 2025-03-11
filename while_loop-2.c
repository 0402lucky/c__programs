//2. First 10 Fibonacci Numbers
#include <stdio.h>

int main() {
    int a = 0, b = 1, count = 10, temp;
    printf("%d %d ", a, b);
    while (count - 2 > 0) {
        temp = a + b;
        printf("%d ", temp);
        a = b;
        b = temp;
        count--;
    }
    printf("\n");
    return 0;
}


