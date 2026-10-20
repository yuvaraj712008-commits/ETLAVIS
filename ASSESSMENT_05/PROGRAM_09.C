//PRINT SUM OF  NUMBERS WHOSE ONES DIGITS IS 5
#include<stdio.h>
int main(){
    int a, b=0;
    for(a=10;a<100;a++){
        if(a%10==5){
            b=b+a;        
        }
    }
    printf("%d",b);

}