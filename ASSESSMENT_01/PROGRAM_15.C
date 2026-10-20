//GET A TWO DIGIT NUMBER FROM THE USER AND MAKE ONES DIGIT 0 AND DISPLAY THE NUMBER
#include<stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    if(a<10 || a>99){
        printf("Please enter a two digit number");
        return 0;
    }
    c=a%10;
    printf("%d",a-c);
    return 0;
}