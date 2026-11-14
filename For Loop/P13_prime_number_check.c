#include <stdio.h>

int main() {
    int n, count = 0;
    // printf("Enter your number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if(n <=1){
        count =1;
    } else {
        for (int i = 2; i<n; i++){
            if(n%i == 0) {
                count = 1;
                break;
            }
        }
    }
    if(count == 0) printf("%d is prime number", n);
    else printf("%d is not prime number", n);
    return 0;
}