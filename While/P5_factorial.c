#include <stdio.h>

int main() {
    int n, f=1;
    printf("Enter a positive integer: ");

    scanf("%d", &n);

    int i = 1;
    while (i<=n){
        f*=i;
        i++;
    }
    printf("Factorial of %d is: %d",n, f);

    return 0;
}