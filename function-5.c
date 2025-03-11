//5. Find Square of a Number Using Function
#include <stdio.h>

int square(int num) {
    return num * num;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", square(num));
    return 0;
}
