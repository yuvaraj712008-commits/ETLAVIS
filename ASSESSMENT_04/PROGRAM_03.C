//LOOP PROGRAM TO DISPLAY THE SUM 1 TO 5
#include<stdio.h>
int main(){
    int a=1,b=0;
    loop:if(a<6){
        b+=a;
        a++;
        goto loop;
    }
    printf("%d",b);
    return 0;
}