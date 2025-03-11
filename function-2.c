//2. Check Armstrong and Perfect Numbers Using Function
#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    while (temp) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    scanf("%d", &num);
    if (is_armstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");
    return 0;
}
