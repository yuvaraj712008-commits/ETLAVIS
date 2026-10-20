//PRINT ODD NUMBERS BETWEEN 10 TO 99 WHOSE SUM OF DIGITS IS 7
#include<stdio.h>
int main(){
    int a, b, c;
    for(a=10;a<69;a++){
        if(a%2==1){
            b=a%10;
            c=((a/10)%10)+b;
            if(c==7){
                printf("%d\n",a);
            }
        }
    }

}