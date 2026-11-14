#include <stdio.h>

int main() {
    int n, pass = 1234;

    do {
        printf("Enter your 4 digits password: ");

        if (scanf("%d", &n) != 1) {
            printf("Invalid input! Enter numbers only.\n");

            while (getchar() != '\n');
            continue;
        }

        if (pass != n)
            printf("Incorrect password! Try again.\n");
    } while (pass != n);

    printf("Your password is correct.");

    return 0;
}