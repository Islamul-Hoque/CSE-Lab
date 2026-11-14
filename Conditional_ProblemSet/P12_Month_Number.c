#include <stdio.h>

int main() {
    int n;
    printf("Enter your month number between 1 to 12\n");
    scanf("%d", &n);

    switch(n){
        case 1: {
            printf("January month has 31 days");
            break;
        }
        case 2: {
            printf("February month has 28 days");
            break;
        }
        case 3: {
            printf("March month has 31 days");
            break;
        }
        case 4: {
            printf("April month has 30 days");
            break;
        }
        case 5: {
            printf("May month has 31 days");
            break;
        }
        case 6: {
            printf("June month has 30 days");
            break;
        }
        case 7: {
            printf("July month has 31 days");
            break;
        }
        case 8: {
            printf("August month has 31 days");
            break;
        }
        case 9: {
            printf("September month has 30 days");
            break;
        }
        case 10: {
            printf("October month has 31 days");
            break;
        }
        case 11: {
            printf("November month has 30 days");
            break;
        }
        case 12: {
            printf("December month has 31 days");
            break;
        }
        default: 
            printf("Please enter proper month number between 1 to 12\n");
    }

    return 0;
}