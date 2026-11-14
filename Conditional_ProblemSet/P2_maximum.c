// Way-1: Only if

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>=b && a>=c){
        printf("%d is maximum number", a);
    } if(b>a && b>=c){
        printf("%d is maximum number", b);
    } if(c>a && c>b){
        printf("%d is maximum number", c);
    }
    return 0;
}




// Way-2: if-else if ladder
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>=b && a>=c){
        printf("%d is maximum number", a);
    } else if(b>=a && b>=c){
        printf("%d is maximum number", b);
    } else{
        printf("%d is maximum number", c);
    }
    return 0;
}



// Way-3: Nested if-else
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>=b){
        if(a>=c){
            printf("%d is maximum number", a);
        } else{
            printf("%d is maximum number", c);
        }
    } else {
        if(b>=c){
            printf("%d is maximum number", b);
        }
        else{
            printf("%d is maximum number", c);
        }
    }
    return 0;
}