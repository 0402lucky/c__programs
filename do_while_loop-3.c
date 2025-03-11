//3. Sum of Positive Integers Until User Enters 0
#include <stdio.h>

int main() {
    int num, sum = 0;
    do {
        scanf("%d", &num);
        if (num > 0) sum += num;
    } while (num != 0);
    printf("%d\n", sum);
    return 0;
}

