#include <stdio.h>

int main() {
    int max=0;

    for (int i = 0; i < 5; i++){
        int n;
        scanf("%d", &n);
        if(max<=n){
            max = n;
        }
    }

    printf("%d", max);
    return 0;
}