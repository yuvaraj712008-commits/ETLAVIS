//PRINT ODD NUMBERS BETWEEN 10 TO 99 WHOSE SUM OF DIGITS IS 7
#include<stdio.h>
int main(){
    int a=10, b, c;
    while(a<69){
        if(a%2==1){
            b=a%10;
            c=((a/10)%10)+b;
            if(c==7){
                printf("%d\n",a);
            }
        }
        a++;
    }

}