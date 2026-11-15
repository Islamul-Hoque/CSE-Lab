#include <stdio.h>

int main() {
    float a, b, c, root1, root2,D;

    printf("Enter coefficients a, b and c: \n");
    scanf("%f %f %f", &a, &b, &c);

    if(a==0){
        printf("This is not a quadratic equation.");
    }
    else{
        D= b*b-4*a*c;

        if(D>0){
            root1 = (-b +sqrt(D))/2*a;
            root2 = (-b -sqrt(D))/2*a;

            printf("Root1: %.2f\n", root1);
            printf("Root2: %.2f", root2);
        }
        else if(D==0){
            root1 = -b/2*a;
            printf("Both roots are equal.\n");
            printf("Root= %.2f", root1);
        }
        else{
            printf("Roots are imaginary.");
        }
    }

    return 0;
}