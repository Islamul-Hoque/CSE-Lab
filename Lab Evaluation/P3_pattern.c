/*
Question-3: A classroom has R rows and C columns of seats. 
Write a C program that takes the number of rows (R) and columns (C) as user input 
and uses nested loops to display the seat numbers sequentially, starting from 1. (10 Marks)
*/

#include <stdio.h>

int main() {
    int r, c, seat = 1;

    printf("Enter the number of rows and columns: \n");

    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) {
        printf("Invalid input!\n");
        return 1;
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            printf("%d\t", seat);
            seat++;
        }
        printf("\n");
    }

    return 0;
}
