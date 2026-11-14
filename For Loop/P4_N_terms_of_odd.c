#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2*n-1; i+=2){
            printf("%d ",i);
            sum+=i;
    }
    printf("\nSum=: %d", sum);

    return 0;
}
