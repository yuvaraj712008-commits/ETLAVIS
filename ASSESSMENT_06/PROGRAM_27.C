//PRINT THE TOTAL COUNT OF NUMBER LESS THAN 100000 WHOSE SUM OF DIGIT IS 14
#include <stdio.h>
int main() {
    int a, b, c, d = 0, n;
    for (a = 10; a < 100000; a++) {
        n = a;
        c = 0;
        while (n > 0) {
            b = n % 10;
            c = c + b;
            n = n / 10;
        }
        if (c == 14) {
            d++;
        }
    }
    printf("%d", d);
    return 0;
}