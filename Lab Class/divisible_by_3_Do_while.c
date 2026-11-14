#include <stdio.h>

int main(){
    int sum = 0;

    int i = 3;
    do{
        if (i % 3 == 0){
            sum += i;
        }
        i++;
    } while (i >100);
    printf("%d", sum);
    return 0;
}