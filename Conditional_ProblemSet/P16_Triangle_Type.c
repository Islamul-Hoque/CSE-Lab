#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b) {
        if (a == b && b == c) {
            printf("The triangle is Equilateral.");
        } else if (a == b || b == c || c == a) {
            printf("The triangle is Isosceles.");
        } else {
            printf("The triangle is Scalene.");
        }
    } else {
        printf("The triangle is not valid.");
    }

    return 0;
}