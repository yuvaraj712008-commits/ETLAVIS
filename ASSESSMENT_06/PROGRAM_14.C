//LOOP PROGRAM TO INTERCHANGE THE FIRST AND LAST DIGIT OF A NUMBER
#include <stdio.h>
int main() {
    int a, b = 0, c, d, e = 1, f;
    scanf("%d", &a);
    c = a;
    while(a>=10) {
        a=a/10;
        e=e*10;
    }
    d = c % 10;
    f = c - a * e - d;
    f = f + d * e + a;
    printf("%d", f);
    return 0;
}