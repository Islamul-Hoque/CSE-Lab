#include <stdio.h>

int main(){
    int n, i = 1;
    printf("Enter your number: \n");
    scanf("%d", &n);

    if(n <=0) return 0;

    while (i <= 10){
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}