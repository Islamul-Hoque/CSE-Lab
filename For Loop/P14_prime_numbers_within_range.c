#include <stdio.h>

int main() {
    int start, end;

    // printf("Enter starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    if (start > end) {
        printf("Invalid range!\n");
        return 1;
    }

    for (int i = start; i <= end; i++) {
        if (i > 1){
            int count = 1;

            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    count = 0;
                    break;
                }
            }

            if (count == 1) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}