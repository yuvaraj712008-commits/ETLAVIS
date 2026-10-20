//GET INPUT FROM USER AND IF LSB IS EVEN PRINT NUMBER OR IF ODD SUBTRACT ONE FROM MSB AND DISPLAY NUMBER
#include<stdio.h>
int main(){
    int a, b, c=1,d;
    scanf("%d",&a);
    b=a%10;
    if(b%2==1){
        d=a;
        loop:if(a>=10){
            a=a/10;
            c=c*10;
            goto loop;
        }
        d=d-c;
        printf("%d",d);
    }
    else{
        printf("%d",a);
    }
}