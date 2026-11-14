#include <stdio.h>

int main() {
    int count =0, sum=0;

    for (int i = 100; i <=200; i++){
        if(i%9 == 0){
            count++;
            sum+=i;
        }
    }
    printf("Count: %d\n", count);
    printf("Sum: %d", sum);

    return 0;
}