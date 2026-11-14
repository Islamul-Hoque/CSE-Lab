/*
What is a Perfect Number?
যে ধনাত্মক পূর্ণসংখ্যার নিজেকে বাদ দিয়ে সকল ধনাত্মক গুণনীয়কের যোগফল সংখ্যাটির সমান, তাকে Perfect Number বলে।
*/


#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <n; i++)
        if(n%i == 0) sum+=i;

    if(n >0 && sum == n) 
        printf("%d is perfect number", n);
    else
        printf("%d is not perfect number", n);

    return 0;
}
