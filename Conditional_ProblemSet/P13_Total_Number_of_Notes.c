
#include <stdio.h>

int main() {
    int amount, note_1 = 0, note_2 = 0, note_5 = 0, note_10 = 0, note_20 = 0, note_50 = 0, note_100 = 0, note_200=0, note_500 = 0, note_1000 = 0;

    printf("Enter your amount\n");
    scanf("%d", &amount);

    note_1000 = amount / 1000;
    amount = amount % 1000;

    note_500 = amount / 500;
    amount = amount % 500;

    note_200 = amount / 200;
    amount = amount % 200;

    note_100 = amount / 100;
    amount = amount % 100;

    note_50 = amount / 50;
    amount = amount % 50;

    note_20 = amount / 20;
    amount = amount % 20;

    note_10 = amount / 10;
    amount = amount % 10;

    note_5 = amount / 5;
    amount = amount % 5;

    note_2 = amount / 2;
    amount = amount % 2;

    note_1 = amount;

    int total = note_1000 + note_500 + note_200 + note_100 +note_50 + note_20 + note_10 + note_5 + note_2 + note_1;

    printf("1000 Taka notes: %d\n", note_1000);
    printf("500 Taka notes: %d\n", note_500);
    printf("200 Taka notes: %d\n", note_200);
    printf("100 Taka notes: %d\n", note_100);
    printf("50 Taka notes: %d\n", note_50);
    printf("20 Taka notes: %d\n", note_20);
    printf("10 Taka notes: %d\n", note_10);
    printf("5 Taka notes: %d\n", note_5);
    printf("2 Taka notes: %d\n", note_2);
    printf("1 Taka notes: %d\n", note_1);

    printf("Total number of notes: %d\n", total);

    return 0;
}