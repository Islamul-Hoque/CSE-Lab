#include <stdio.h>

int main() {
    int n, rem, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    } while (n != 0);

    printf("Reversed number: %d", reverse);

    return 0;
}