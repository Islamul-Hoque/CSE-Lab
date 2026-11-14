// #include <stdio.h>

// int main(){
//     int a, b, sum, sub, mul, div;
//     scanf("%d %d", &a, &b);

//     sum = a+b;
//     sub = a-b;
//     mul = a*b;
//     div = a/b;

//     printf("Sum is: %d\n", sum);
//     printf("Sub is: %d\n", sub);
//     printf("Mul is: %d\n", mul);
//     printf("Div is: %d", div);

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     if(n % 2==0) printf("Even");
//     else printf("Odd");
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int n; 
//     scanf("%d", &n);

//     if(n == 0) printf("Non negative");
//     else if(n > 0) printf("Positive");
//     else printf("Negative");

//     return 0;
// }



#include <stdio.h>

int main() {
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max) max = b;
    else if (c > max) max = c;

    printf("%d", max);
    return 0;
}