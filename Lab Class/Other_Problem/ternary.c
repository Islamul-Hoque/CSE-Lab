#include <stdio.h>

int main() {
    int a, b, c, big;
    printf("Enter three number\n");
    scanf("%d %d %d", &a, &b, &c);

    big= a>b ? (a>c ? a:c) : (b>c? b :c);

    printf("%d id bigger\n", big);

    return 0;
}

// CGPA
// switch