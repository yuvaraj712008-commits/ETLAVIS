//LOOP PROGRAM TO DISPLAY THE SUM OF NUMBER OF DIGITS
#include<stdio.h>
int main(){
    int a,b=0;
    scanf("%d",&a);
    loop:if(a>0){
        b+=(a%10);
        a=a/10;
        goto loop;
    }
    printf("%d",b);
    return 0;
}