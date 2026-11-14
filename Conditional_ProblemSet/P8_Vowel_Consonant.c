#include <stdio.h>

int main() {
    char c;
    printf("Enter your character\n");
    scanf("%c", &c);

    if((c >= 'A' && c<= 'Z') ||(c>= 'a' && c<= 'z')){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            printf("%c is vowel", c);
        } else {
            printf("%c is consonant", c);
        }
    } else {
        printf("%c is not alphabet", c);
    }

    return 0;
}