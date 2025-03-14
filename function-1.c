//1. Check Whether a Number is Prime Using Function
#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);
    if (is_prime(num))
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");
    return 0;
}
