//1. Convert Hours and Minutes to Total Minutes
#include <stdio.h>
int main() {
    int hours, minutes, total_minutes;
    scanf("%d %d", &hours, &minutes);
    total_minutes = (hours * 60) + minutes;
    printf("%d\n", total_minutes);
    return 0;
}
