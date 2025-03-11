//2. Read Forename, Surname, and Year of Birth, then Display Sequentially
#include <stdio.h>
int main() {
    char forename[50], surname[50];
    int year;
    scanf("%s %s %d", forename, surname, &year);
    printf("%s %s %d\n", forename, surname, year);
    return 0;
}
