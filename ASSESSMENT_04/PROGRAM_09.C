//LOOP PROGRAM TO DISPLAY THE SUM OF ODD NUMBERS BETWEEN  70 TO 80
#include<stdio.h>
int main(){
    int a=71,b=0;
    loop:if(a<80){
        if(a%2==1){
            b+=a;
        }
        a++;
        goto loop;
    }
    printf("%d",b);
    return 0;
}