//PRINT THE 4 DIGIT NUMBER WHICH IS DIVISIBLE BY 7 AND 9
#include<stdio.h>
int main(){
    int a=1000, b, c, d;
    while(a<9999){
        if((a%7==0) && (a%9==0)){
            b=a;
        }
        a++;
    }
    printf("%d",b);
}