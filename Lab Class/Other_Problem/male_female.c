#include <stdio.h>

int main() {
    char gen;
    int age;

    printf("Enter your gender (M/F): \n");
    scanf("%c", &gen);

    if (gen != 'm' && gen != 'M' && gen != 'f' && gen != 'F') {
        printf("Invalid gender\n");
        return 0;
    }

    printf("Enter your age: \n");
    scanf("%d", &age);

    if (gen == 'm' || gen == 'M') {
        if (age >= 21)
            printf("Eligible\n");
        else 
            printf("Not eligible\n");
    } 
    else if (gen == 'f' || gen == 'F') {
        if (age >= 18)
            printf("Eligible\n");
        else 
            printf("Not eligible\n");
    }

    return 0;
}
