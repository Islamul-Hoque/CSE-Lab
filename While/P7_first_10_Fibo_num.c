#include <stdio.h>

int main() {
    int i =1, a =0, b=1, c;

    while (i <=10){
        printf("%d ", a);

        c=a+b;
        a =b;
        b=c;
        i++;
    }

    return 0;
}