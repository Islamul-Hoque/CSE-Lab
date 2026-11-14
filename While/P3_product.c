#include <stdio.h>

int main(){
    int mul = 1;

    int i = 1; 
    while(i< 6){
        mul *= i;
        i++;
    }
    printf("The product of numbers from 1 to 5 is: %d", mul);
    return 0;
}