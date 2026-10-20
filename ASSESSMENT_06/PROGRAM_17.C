//CHECK PRIME OR NOT AND SUM OF DIGITS IS EQUAL TO 14 OR NOT 
#include <stdio.h>
int main() {
    int a, b = 0, i=2, j=0, l = 0, n;
    scanf("%d", &a);
    n = a;
    if (a <= 1) {
        printf("NOT PRIME\n");
    } else {
        while(i*i<=a) {
            if (a % i == 0) {
                b = 1;
                break;
            }
            i++;
        }
        if (b == 0) {
            printf("PRIME\n");
        } else {
            printf("NOT PRIME\n");
        }
    }
    while(n>0) {
        j=n%10;
        l=l+j;
        n=n/10;
    }
    if (l == 14) {
        printf("Equal to 14");
    } 
    else {
        printf("Not equal to 14");
    }
    return 0;
}
