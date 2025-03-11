//3.Perfect Number
#include <stdio.h>

int is_perfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++)
        if (num % i == 0) sum += i;
    return sum == num;
}

int main() {
    int num;
    scanf("%d", &num);
    if (is_perfect(num))
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");
    return 0;
}
