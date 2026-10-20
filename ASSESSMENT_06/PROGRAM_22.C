//PRINT THE TWO DIGIT ODD NUMBERS IN THE USER GIVEN INPUT 
#include<stdio.h>
int main(){
    int a, b, c, d=0;
    scanf("%d",&a);
    while(a>10){
        b=a%10;
        c=(a/10)%10;
        if(b%2==1){
            d++;
        }
        a=a/10;
    }
    printf("%d",d);
}