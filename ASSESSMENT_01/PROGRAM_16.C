//GET A TWO DIGIT NUMBER FROM THE USER AND MAKE THE TENS DIGIT 1 AND DISPLAY THE NUMBER
#include<stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    if(a<10 || a>99){
        printf("Please enter a two digit number");
        return 0;
    }
    c=a%10;
    printf("1%d",c);
    return 0;
}