// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     // Upper Pyramid
//     for (int i = 1; i <= n; i++) {
//         for (int k = 1; k <= n-i; k++) {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2*i-1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     // Lower Inverted Pyramid
//     for (int i = n-1; i >= 1; i--) {
//         for (int k = 1; k <= n-i; k++) {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2*i-1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int k = n-i; k >= 1; k--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }


    for (int i = n-1; i >= 1; i--) {
        for (int k = n-i; k >= 1; k--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}









// #include <stdio.h>

// int main() {
//     int start, end, count=1;
//     scanf("%d %d", &start,&end);

//     if(start>end){
//         printf("Invalid range");
//         return 1;
//     }

//     for (int i = start; i <=end; i++){
//         if(i> 1){
//             count =1;
//             for (int j = 2; j <i; j++){
//                 if(i%j == 0){
//                     count = 0;
//                     break;
//                 }
//             }
//             if(count ==1) printf("%d ", i);
//         }
//     }
    
//     return 0;
// }



// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n, temp, rem, digitCount=0, sum=0;
//     scanf("%d", &n);

    
//     if(n<0){
//         printf("Enter a positive integer\n");
//         return 1;
//     }

//     temp =n;
//     if(n==0) digitCount=1;
//     else{
//         for(; temp !=0; temp/=10)
//             digitCount++;
//     }

//     temp =n;
//     for ( ; temp != 0; temp/=10){
//         rem = temp % 10;
//         sum += pow(rem, digitCount);
//     }
    
//     if( sum == n) printf("%d is armstrong number", n);
//     else printf("%d is not armstrong number", n);

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int n, sum=0;
//     scanf("%d", &n);

//     for (int i = 1; i < n; i++){
//         if(n%i == 0){
//             sum+=i;
//         }
//     }
//     if(n>0 && sum ==n)
//         printf("%d is perfect number",n);
//     else 
//         printf("%d is not perfect number", n);
//     return 0;
// }


// 0 is an Armstrong Number, but it is not a Perfect Number.