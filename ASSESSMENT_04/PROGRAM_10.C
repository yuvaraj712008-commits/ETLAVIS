//LOOP PROGRAM TO DISPLAY THE NUMBER OF DIGITS
#include<stdio.h>
int main(){
    int a,b=0;
    scanf("%d",&a);
    loop:if(a>0){
        a=a/10;
        b++;
        goto loop;
    }
    printf("%d",b);
    return 0;
}