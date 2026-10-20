//FIND THE LCM OF THREE NUMBERS FROM THE USER GIVEN THREE INPUTS
#include<stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        d=a;
    }
    else if(b>a && b>c){
        d=b;
    }
    else{
        d=c;
    }
    for(;;){
        if(d%a==0 && d%b==0 && d%c==0){
            printf("%d",d);
            break;
        }
        d++;
    }
    return 0;
}