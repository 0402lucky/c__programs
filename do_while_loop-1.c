//1. Average of Input Numbers Until User Stops
#include <stdio.h>

int main() {
    int num, count = 0, sum = 0;
    char choice;
    do {
        scanf("%d", &num);
        sum += num;
        count++;
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Average: %.2f\n", (float)sum / count);
    return 0;
}

