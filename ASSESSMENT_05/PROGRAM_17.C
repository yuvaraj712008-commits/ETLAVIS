//CHECK PRIME OR NOT AND SUM OF DIGITS IS EQUAL TO 14 OR NOT 
#include <stdio.h>
int main() {
    int a, b = 0, i, j, l = 0, n;
    scanf("%d", &a);
    n = a;
    if (a <= 1) {
        printf("NOT PRIME\n");
    } else {
        for(i=2;i*i<=a;i++) {
            if (a % i == 0) {
                b = 1;
                break;
            }
        }
        if (b == 0) {
            printf("PRIME\n");
        } else {
            printf("NOT PRIME\n");
        }
    }
    for (int k=n;k>0;) {
        j=k%10;
        l=l+j;
        k=k/10;
    }
    if (l == 14) {
        printf("Equal to 14");
    } 
    else {
        printf("Not equal to 14");
    }
    return 0;
}
