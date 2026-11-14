#include <stdio.h>

int main() {
    int n, count=0;
    char c;
    float avg =0, sum=0;

    do{
        printf("Enter a number: ");
        scanf("%d", &n);

        sum+=n;
        count++;

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &c);
        
    }while (c == 'Y' || c == 'y');

    avg = sum/count;
    printf("Avg: %.2f", avg);

    return 0;
}