//1. Check if a Number is Palindrome
#include <stdio.h>

int main() {
    int num, temp, reversed = 0;
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    if (num == reversed)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}

