#include <stdio.h>

int main() {
    int n, sum =0;
    printf("Enter numbers:\n");
    scanf("%d", &n);

    while (n !=0){
        if(n>0){
            sum+=n;
        }
        scanf("%d", &n);
    }
    printf("%d", sum);
    return 0;
}