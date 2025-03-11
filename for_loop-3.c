//3. Cube of Numbers up to N
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("Number is %d and cube is %d\n", i, i * i * i);
    return 0;
}
