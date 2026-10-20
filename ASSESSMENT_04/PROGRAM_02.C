//LOOP PROGRAM TO DISPLAY 5 TO 1
#include<stdio.h>
int main(){
    int a=5;
    loop:if(a>0){
        printf("%d\n",a);
        a--;
        goto loop;
    }
}