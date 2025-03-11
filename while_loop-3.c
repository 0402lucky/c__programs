//3. Detect Duplicate Input Numbers
#include <stdio.h>

int main() {
    int num, prev, found = 0;
    scanf("%d", &prev);
    while (1) {
        scanf("%d", &num);
        if (num == prev) {
            found = 1;
            break;
        }
        prev = num;
    }
    printf("Duplicate Number Detected: %d\n", num);
    return 0;
}
