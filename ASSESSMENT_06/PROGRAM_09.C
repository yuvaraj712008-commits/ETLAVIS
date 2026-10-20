//PRINT SUM OF  NUMBERS WHOSE ONES DIGITS IS 5
#include<stdio.h>
int main(){
    int a=10, b=0;
    while(a<100){
        if(a%10==5){
            b=b+a;        
        }
        a++;
    }
    printf("%d",b);
}