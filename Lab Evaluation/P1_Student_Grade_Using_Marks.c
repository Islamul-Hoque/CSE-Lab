
#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: \n");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) printf("Enter your mark between 1 to 100");
    else if (marks >= 80) printf("Grade: A+");
    else if (marks >= 70) printf("Grade: A");
    else if (marks >= 60) printf("Grade: A-");
    else if (marks >= 50) printf("Grade: B");
    else if (marks >= 40) printf("Grade: C");
    else printf("F");

    return 0;
}
