//GET A FOUR DIGIT NUMBER FROM THE USER AND DISPLAY THE HUNDREDS, UNITS AND TENS DIGITS OF IT
#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    if(a<1000 || a>9999){
        printf("Please enter a four digit number");
        return 0;
    }
    b=a%10;
    c=(a/10)%10;
    d=a/100;
    printf("%d%d%d",d,b,c);
    return 0;
}