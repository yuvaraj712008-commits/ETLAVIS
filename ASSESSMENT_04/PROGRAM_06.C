//LOOP PROGRAM TO DISPLAY THE ODD NUMBERS BETWEEN  11 TO 20
#include<stdio.h>
int main(){
    int a=11,b=0;
    loop:if(a<21){
        if(a%2==1){
            printf("%d\n",a);
        }
        a++;
        goto loop;
    }
    return 0;
}