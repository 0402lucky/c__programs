//2. Check if Angles Form a Triangle
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c == 180)
        printf("Valid Triangle\n");
    else
        printf("Invalid Triangle\n");
    return 0;
}
