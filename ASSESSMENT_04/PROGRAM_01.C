//LOOP PROGRAM TO DISPLAY 1 TO 5
#include<stdio.h>
int main(){
    int a=1;
    loop:if(a<6){
        printf("%d\n",a);
        a++;
        goto loop;
    }
}