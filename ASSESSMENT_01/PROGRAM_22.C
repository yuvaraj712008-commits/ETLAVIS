//GET A NUMBER FROM THE USER IF HTE SUM OF THE DIGITS LESS THAN 10 , DISPLAY THE RESULT IF GREATER THAN 10 , DISPLAY THE SUM OF THE RESULT
#include<stdio.h>
int main(){
    int a,c,b,d,e,f,g,h,i;
    scanf("%d",&a);
    b=a%10;
    d=((a/10)%10);
    e=(a/100)+b+d;
    if(e<10){
        printf("%d",e);
    }
    else {
        f=e%10;
        g=((e/10)%10)+f;
        if(g<10){
            printf("%d",g);
        }
        else{
            h=g%10;
            i=((g/10)%10)+h;
            printf("%d",i);
        }
    }
    return 0;
}