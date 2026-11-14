/*
Armstrong Number কী?
যে সংখ্যার প্রতিটি অঙ্কের ঘাতের যোগফল ওই সংখ্যাটির সমান হয়, তাকে Armstrong Number বলে। এখানে ঘাত হবে সংখ্যাটির মোট অঙ্কের সংখ্যা।
*/


#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, rem, sum=0, digitCount=0;

    // printf("Enter any positive integer: ");
    if(scanf("%d", &n) !=1){
        printf("Invalid input!\n");
        return 1;
    }
    if(n<0){
        printf("Enter a positive integer\n");
        return 1;
    }

    temp = n;

    // Count total digits
    if(n == 0)
        digitCount =1;
    else 
        for (; temp != 0; temp /= 10)
        digitCount++;

    // printf("%d has: %d digit", n, digitCount);

    // Calculate Armstrong sum
    temp = n;
    for (; temp != 0; temp /= 10) {
        rem = temp % 10;
        sum += pow(rem, digitCount);
    }

    if ( sum == n)
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);

    return 0;
}


