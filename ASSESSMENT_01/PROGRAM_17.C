//GET A THREE DIGIT NUMBER FROM THE USER AND MAKE ONES DIGIT 2 AND DISPLAY THE NUMBER
#include<stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    if(a<100 || a>999){
        printf("Please enter a three digit number");
        return 0;
    }
    c=(a/10);;
    printf("%d2",c);
    return 0;
}