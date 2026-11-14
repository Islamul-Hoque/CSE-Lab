#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is even integer", n);
    else 
        printf("%d is an odd integer", n);

    return 0;
}