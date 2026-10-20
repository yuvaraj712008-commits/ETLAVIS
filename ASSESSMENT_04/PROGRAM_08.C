//LOOP PROGRAM TO DISPLAY THE EVEN NUMBERS BETWEEN  10 TO 61 WHOSE SUM OF DIGITS IS 6
#include<stdio.h>
int main(){
    int a=10,b,c;
    loop:if(a<61){
        if(a%2==0){
            b=a%10;
            c=((a/10)%10)+b;
            if(c==6){
                printf("%d\n",a);
            }
        }
        a++;
        goto loop;
    }
    return 0;
}