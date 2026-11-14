#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    if(m==0)
        printf("n is 0");
    if(m<0)
        printf("n is -1");
    if(m>0)
        printf("n is 1");

    return 0;
}