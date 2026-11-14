#include <stdio.h>

int main() {
    int y;
    printf("Enter your year\n");
    scanf("%d", &y);

    if(y%400 == 0 || (y%4 == 0 && y%100 != 0)){
        printf("%d is  leap year", y);
    } else{
        printf("%d is not leap year", y);
    }

    return 0;
}