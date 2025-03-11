//4. Check Even or Odd Using Function
#include <stdio.h>

int is_even(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    scanf("%d", &num);
    if (is_even(num))
        printf("Even Number\n");
    else
        printf("Odd Number\n");
    return 0;
}
