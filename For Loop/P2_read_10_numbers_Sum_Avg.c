#include <stdio.h>

int main(){
    int n, sum=0;
    float avg = 0;

    for (int i = 1; i <= 10; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &n);
        sum += n;
    }
    avg = (float)sum/10;

    printf("Sum: %d\n", sum);
    printf("Avg: %.2f", avg);

    return 0;
}
