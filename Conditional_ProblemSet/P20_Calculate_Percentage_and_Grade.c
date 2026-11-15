#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer;
    float total, percentage;

    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &physics, &chemistry, &biology, &mathematics, &computer);

    total = physics + chemistry + biology + mathematics + computer;

    percentage = (total / 500) * 100;

    printf("Percentage = %.2f%%\n", percentage);

    // if (percentage >= 90) printf("Grade A\n");
    // else if (percentage >= 80) printf("Grade B\n");
    // else if (percentage >= 70) printf("Grade C\n");
    // else if (percentage >= 60) printf("Grade D\n");
    // else if (percentage >= 40) printf("Grade E\n");
    // else printf("Grade F\n");

    switch ((int)percentage / 10) {
    case 10:
    case 9:
        printf("Grade A\n");
        break;

    case 8:
        printf("Grade B\n");
        break;

    case 7:
        printf("Grade C\n");
        break;

    case 6:
        printf("Grade D\n");
        break;

    case 5:
    case 4:
        printf("Grade E\n");
        break;

    default:
        printf("Grade F\n");
}
    return 0;
}
