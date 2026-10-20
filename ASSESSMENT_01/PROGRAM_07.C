//GET A TWO DIGIT NUMBER FROM THE USER AND DISPLAY THE TENS DIGIT OF IT
#include<stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    if(a<10 || a>99){
        printf("Please enter a two digit number");
        return 0;
    }
    c=(a/10)%10;
    printf("%d",c);
    return 0;
}