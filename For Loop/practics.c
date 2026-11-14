#include <stdio.h>

int main() {
    int n, count=1;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++){
        for (int k = 1; k <=n-i; k++){
            printf(" ");
        }
        for (int j = 1; j <=2*i-1; j++){
            printf("%d", count);
            count++;
        }
        printf("\n");
    }
    
    return 0;
}



// #include <stdio.h>

// int main() {
//     int start, end, count=1;
//     scanf("%d %d", &start,&end);

//     for (int i = start; i <=end; i++){
//         if(start> 1){
//             count =1;
//             for (int i = 1; i <end; i++){
//                 if(end%i == 0){
//                     count = 0;
//                     break;
//                 }
//             }
//             if(count ==1) printf("%d", end);
//         }
//     }
    
//     return 0;
// }