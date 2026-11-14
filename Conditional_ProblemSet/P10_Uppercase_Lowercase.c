#include <stdio.h>

int main() {
    char c;
    printf("Enter your character\n");
    scanf(" %c", &c);

    if(c >= 'A' && c<= 'Z') 
        printf("%c is uppercase", c);
    else if(c>= 'a' && c<= 'z')
        printf("%c is lowercase", c);
    else 
        printf("%c is not alphabet", c);

    return 0;
}