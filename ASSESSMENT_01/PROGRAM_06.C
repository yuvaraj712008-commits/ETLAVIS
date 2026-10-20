//GET A TWO DIGIT INPUT FROM THE USER AND FIND THE ONES DIGIT AND DISPLAY THE RESULT
#include<stdio.h>
int main(){
    int a,C;
    scanf("%d",&a);
    if(a<10 || a>99){
        printf("Please enter a two digit number");
        return 0;
    }
    C=a%10;
    printf("%d",C);
    return 0;
}