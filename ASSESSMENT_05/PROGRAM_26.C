//PRINT THE 4 DIGIT NUMBER WHICH IS DIVISIBLE BY 7 AND 9
#include<stdio.h>
int main(){
    int a, b, c, d;
    for(a=1000;a<9999;a++){
        if((a%7==0) && (a%9==0)){
            b=a;
        }
    }
    printf("%d",b);
}