#include <stdio.h>

int main() {
    int day;
    printf("Enter day number from 1 to 7\n");
    scanf("%d", &day);

    switch (day){
    case 1: {
            printf("Sat");
            break;
        }
    case 2: {
            printf("Sun");
            break;
        }
    case 3: {
            printf("Mon");
            break;
        }
    case 4: {
            printf("Tue");
            break;
        }
    case 5: {
            printf("Wen");
            break;
        }
    
    case 6: {
            printf("Thu");
            break;
        }
    
    case 7: {
            printf("Fri");
            break;
        }
    
    default:
        {
            printf("Enter valid day number from 1 to 7");
            break;
        }
    }
    return 0;
}

/*
Mark           Grade letter
>= 80           A+
>=75 && <80     A
>= 70 && <75    A-
>= 65 && <70    b+
>= 60 && <65    b
>= 65 && <70    b-



*/