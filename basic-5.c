//5. Calculate Perimeter of a Rectangle
#include <stdio.h>

int main() {
    float height, width, perimeter;
    scanf("%f %f", &height, &width);
    perimeter = 2 * (height + width);
    printf("%.2f\n", perimeter);
    return 0;
}
