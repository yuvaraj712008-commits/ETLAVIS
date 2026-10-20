//LOOP PROGRAM TO DISPLAY THE SUM 6 TO 1
#include<stdio.h>
int main(){
    int a=6,b=0;
    loop:if(a>0){
        b+=a;
        a--;
        goto loop;
    }
    printf("%d",b);
    return 0;
}