#include <stdio.h>

int main() {
    int n, sum =0;

    do{
        printf("Enter your number: ");
        scanf("%d", &n);
        if(n>=0) sum+=n;
    }
    while(n>=0);
    printf("sum of all entered numbers is: %d", sum);

    return 0;
}