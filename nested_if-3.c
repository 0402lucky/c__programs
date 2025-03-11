//3. Username and Password Authentication
#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];
    scanf("%s %s", username, password);

    if (strcmp(username, "admin") == 0) {
        if (strcmp(password, "password123") == 0)
            printf("Login Successful\n");
        else
            printf("Incorrect Password\n");
    } else
        printf("Invalid Username\n");

    return 0;
}
