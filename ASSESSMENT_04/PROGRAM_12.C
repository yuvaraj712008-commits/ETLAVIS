//LOOP PROGRAM TO DISPLAY THE REVERSE OF THE NUMBER
#include<stdio.h>
int main(){
    int a,b=0,c=0;
    scanf("%d",&a);
    loop:if(a>0){
        b=a%10;
        c=b+(c*10);
        a=a/10;
        goto loop;
    }
    printf("%d",c);
    return 0;
}