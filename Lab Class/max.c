#include <stdio.h>

int main() {
    int max=0;

    for (int i = 0; i < 3; i++){
        int n;
        scanf("%d", &n);
        max = (n > max) ? n : max;
    }

    printf("%d", max);
    return 0;
}