//LOOP PROGRAM TO DISPLAY THE ODD NUMBERS BETWEEN  11 TO 70 WHOSE SUM OF DIGITS IS 7
#include<stdio.h>
int main(){
    int a=10,b,c;
    loop:if(a<71){
        if(a%2==1){
            b=a%10;
            c=((a/10)%10)+b;
            if(c==7){
                printf("%d\n",a);
            }
        }
        a++;
        goto loop;
    }
    return 0;
}