//PRINT EVEN NUMBERS BETWEEN 10 TO 99 WHOSE SUM OF DIGITS IS 6
#include<stdio.h>
int main(){
    int a, b, c;
    for(a=10;a<61;a++){
        if(a%2==0){
            b=a%10;
            c=((a/10)%10)+b;
            if(c==6){
                printf("%d\n",a);
            }
        }
    }
}