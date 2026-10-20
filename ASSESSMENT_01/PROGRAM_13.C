//GET A THREE DIGIT NUMBER FROM THE USER AND DISPLAY THE REVERSE OF IT
#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    if(a<100 || a>999){
        printf("Please enter a three digit number");
        return 0;
    }
    b=a%10;
    printf("%d",b);
    c=(a/10)%10;
    printf("%d",c);
    d=a/100;
    printf("%d",d);
    return 0;
}