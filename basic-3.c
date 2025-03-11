//3. Convert Kilometers per Hour to Miles per Hour
#include <stdio.h>

int main() {
    float kmph, mph;
    scanf("%f", &kmph);
    mph = kmph * 0.621371;
    printf("%.2f\n", mph);
    return 0;
}
