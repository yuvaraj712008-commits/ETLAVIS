//LOOP PROGRAM TO INTERCHANGE THE FIRST AND LAST DIGIT OF A NUMBER
#include <stdio.h>
int main() {
    int a, b = 0, c, d, e = 1, f, i;
    scanf("%d", &a);
    c = a;
    for (i=a; i>= 10;) {
        i=i/10;
        e=e*10;
    }
    d = c % 10;
    f = c - i * e - d;
    f = f + d * e + i;
    printf("%d", f);
    return 0;
}