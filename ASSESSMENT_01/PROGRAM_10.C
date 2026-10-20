//GET A THREE DIGIT NUMBER FROM THE USER AND DISPLAY THE TENS DIGIT OF IT
#include<stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    if(a<100 || a>999){
        printf("Please enter a three digit number");
        return 0;
    }
    c=(a/10)%10;
    printf("%d",c);
    return 0;
}