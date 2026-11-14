#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, root1, root2;

    // printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b*b-4*a*c;

    if (D > 0) {
        root1 = (-b+sqrt(D))/2*a;
        root2 = (-b-sqrt(D))/2*a;

        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f", root2);
    } else if (D == 0) {
        root1 = -b/2*a;

        printf("Both roots are equal: %.2f", root1);
    } else {
        printf("Root are imaginary;\n");
        printf("No solution.");
    }

    return 0;
}