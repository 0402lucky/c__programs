//3. Check Voting Eligibility
#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);
    if (age >= 18)
        printf("Eligible to vote\n");
    return 0;
}
