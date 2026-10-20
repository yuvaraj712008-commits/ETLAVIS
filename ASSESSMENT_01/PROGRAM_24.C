//GET INPUT FROM USER AND REVERSE LAST TWO DIGITS AND PRINT THE NUMBER
#include<stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d",&a);
    if(a<1000 || a>9999){
        printf("Enter a four digit number");
    }
        b=a%10;
        c=(a/10)%10;
        d=a/100;
        printf("%d%d%d",d,b,c);
}
