//PRINT ODD NUMBERS BETWEEN 10 TO 99 WHOSE TENS DIGITS IS 7
#include<stdio.h>
int main(){
    int a=70, b, c;
    while(a<80){
        if(a%2==1){
            printf("%d\n",a);
        }
        a++;
    }
}