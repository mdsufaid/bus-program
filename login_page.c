#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];
    char u[20], p[20];

    printf("=== Sign Up ===\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    printf("\nAccount created!\n");

    printf("\n=== Sign In ===\n");
    printf("Username: ");
    scanf("%s", u);
    printf("Password: ");
    scanf("%s", p);

    if (strcmp(username, u) == 0 && strcmp(password, p) == 0) {
        printf("\nLogin Successful!\n");
        printf("=== DASHBOARD ===\n");
        printf("Welcome to Bus Reservation System!\n");
    } else {
        printf("\nLogin Failed!\n");
    }

    return 0;
}
