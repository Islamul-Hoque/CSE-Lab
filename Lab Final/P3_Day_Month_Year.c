// Way-1
#include <stdio.h>

int main() {
    int d, m, y, d_count=0;
    scanf("%d %d %d", &d, &m, &y);

    if (d <= 0 || m <= 0 || m > 12 || y <= 0) {
        printf("Invalid");
        return 1;
    }

    // Only February
    if (m == 2) {
        // Leap year
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
            if (d >= 1 && d <= 29) d_count = 1;
        }
        else {
            if (d >= 1 && d <= 28)  d_count = 1;
        }
    }

    // Other month(30 day)
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d >= 1 && d <= 30)  d_count = 1;
    }
    // Others month(31 day)
    else {
        if (d >= 1 && d <= 31) d_count = 1;
    }

    if (d_count == 1) printf("Valid");
    else printf("Invalid");

    return 0;
}



// Way-2
#include <stdio.h>

int main() {
    int d, m, y, d_count = 0;

    scanf("%d %d %d", &d, &m, &y);

    if (d <= 0 || m <= 0 || m > 12 || y <= 0) {
        printf("Invalid");
        return 1;
    }

    switch (m) {
        // 31 days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (d >= 1 && d <= 31) d_count = 1;
            break;

        // 30 days
        case 4:
        case 6:
        case 9:
        case 11:
            if (d >= 1 && d <= 30) d_count = 1;
            break;

        // February
        case 2:
            if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
                if (d >= 1 && d <= 29) d_count = 1;
            }
            else {
                if (d >= 1 && d <= 28) d_count = 1;
            }
            break;
    }

    if (d_count == 1) printf("Valid");
    else printf("Invalid");

    return 0;
}