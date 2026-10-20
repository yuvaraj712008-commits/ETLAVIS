//GET INPUT FROM USER AND ADD THE DIGITS OF THE TWO DIGIT NUMBER AND DISPLAY THE RESULT 
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    if(a<10 || a>99){
        printf("Enter a two digit number");
    }
    b=a%10;
    c=((a/10)%10)+b;
    printf("%d",c);
}