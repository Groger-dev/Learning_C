#include <stdio.h>

int main(){
    /*float a = 10.3;
    int b = 10;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    */
    
    int a = 99;
    char c = 'a';

    printf("a > c: %d\n", a > c);
    printf("a < b: %d\n", a < c);
    printf("a == c: %d\n", a == c);
    printf("a != c: %d\n", a != c);
    printf("%c é igual a %d\n", c, c);
    
    int b = c + 3;

    printf("a > c: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == c: %d\n", a == b);
    printf("a != c: %d\n", a != b);

    return 0;
}