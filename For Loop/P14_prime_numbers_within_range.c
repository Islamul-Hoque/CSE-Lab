#include <stdio.h>

int main() {
    int start, end;

    // printf("Enter starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    if (start > end) {
        printf("Invalid range!\n");
        return 1;
    }

    for (int n = start; n <= end; n++) {
        if (n > 1){
            int count = 1;

            for (int i = 2; i < n; i++) {
                if (n % i == 0) {
                    count = 0;
                    break;
                }
            }

            if (count == 1) {
                printf("%d ", n);
            }
        }
    }

    return 0;
}