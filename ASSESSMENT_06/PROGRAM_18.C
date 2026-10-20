//CHECK ONES DIGIT AND TENS DIGIT WHETHER PRIME OR NOT PRIME 
#include <stdio.h>
int main() {
    int a, i=2, b, c, d = 0;
    scanf("%d", &a);
    b = a % 10;        
    c = (a / 10) % 10; 
    if (b>1) {
        while(i*i<=b) {
            if (b%i==0) {
                d = 1;
                break;
            }
            i++;
        }
    } else {
        d = 1;
    }
    if (c>1) {
        while(i*i<=c) {
            if (c%i==0) {
                d = 1;
                break;
            }
            i++;
        }
    } else {
        d=1;
    }
    if (d==0)
        printf("Prime");
    else
        printf("Non prime");

    return 0;
}