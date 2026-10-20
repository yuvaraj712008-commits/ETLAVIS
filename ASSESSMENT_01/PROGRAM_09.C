//GET A THREE DIGIT NUMBER FROM THE USER AND DISPLAY THE HUNDREDS DIGITS OF IT
#include<stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    if(a<100 || a>999){
        printf("Please enter a three digit number");
        return 0;
    }
    c=a/100;
    printf("%d",c);
    return 0;
}