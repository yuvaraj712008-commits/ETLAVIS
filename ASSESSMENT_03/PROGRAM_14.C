//CHECK THE INPUTS FIRST TWO DIGIT AND LAST TWO DIGITS ARE SAME 
#include<stdio.h>
int main(){
    int a, b, c, d, e, f, g;
    scanf("%d",&a);
    if(a<1000 || a>9999){
        printf("Enter a four digit number");
    }
    else{
        b=a%10;
        c=(a/10)%10;
        d=c*10+b;
        e=(a/100)%10;
        f=(a/1000);
        g=f*10+e;
        if(d==g){
            printf("SUCCESS");
        }
        else{
            printf("FAILURE");
        }
    }
}