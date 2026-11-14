#include <stdio.h>

int main() {
    int phy, chem, math, total, totalMP;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phy);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chem);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &math);

    total = phy + chem + math;
    totalMP = math + phy;

    printf("Total marks of Maths, Physics and Chemistry: %d\n", total);
    printf("Total marks of Maths and Physics: %d\n", totalMP);

    if (math >= 65 && phy >= 55 && chem >= 50 &&
        (total >= 190 || totalMP >= 140)) {
        printf("The candidate is eligible for admission.");
    } else {
        printf("The candidate is not eligible for admission.");
    }

    return 0;
}