#include <stdio.h>

int main() {
    int n;
    printf("Enter your number\n");
    scanf("%d", &n);

    if(n > 0){
        printf("%d is positive number", n);
    } else if(n<0){
        printf("%d is negative number", n);
    } else{
        printf("%d is Zero", n);
    }
    return 0;
}


// Ternary operator

#include <stdio.h>

int main() {
    int n;

    printf("Enter your number\n");
    scanf("%d", &n);

    printf("%d is %s", n, 
        (n > 0) ? "Positive" : (n < 0) ? "Negative" : "Zero");

    return 0;
}
