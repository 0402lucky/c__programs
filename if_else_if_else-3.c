//3. Student Marks Calculation
#include <stdio.h>

int main() {
    int roll, phy, chem, comp, total;
    float percent;
    char name[50];
    scanf("%d %s %d %d %d", &roll, name, &phy, &chem, &comp);

    total = phy + chem + comp;
    percent = total / 3.0;

    printf("Roll No : %d\nName : %s\n", roll, name);
    printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Computer Application : %d\n", phy, chem, comp);
    printf("Total Marks = %d\nPercentage = %.2f\n", total, percent);

    if (percent >= 60)
        printf("Division = First\n");
    else if (percent >= 45)
        printf("Division = Second\n");
    else if (percent >= 33)
        printf("Division = Third\n");
    else
        printf("Division = Fail\n");

    return 0;
}
