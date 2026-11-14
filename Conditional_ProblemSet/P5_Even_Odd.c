#include <stdio.h>

int main() {
    int n;
    printf("Enter your number\n");
    scanf("%d", &n);

    if(n%2 == 0){
        printf("%d is Even", n);
    } else{
        printf("%d is Odd", n);
    }
    return 0;
}


#include <stdio.h>

int main() {
    int n;
    printf("Enter your number\n");
    scanf("%d", &n);

    // printf("%d id %s",n,
    //     (n%2 ==0 )? "Even" : "Odd");

    printf("%d is %s", n, (n%2==0) ? "Even" : "Odd");
    return 0;
}

