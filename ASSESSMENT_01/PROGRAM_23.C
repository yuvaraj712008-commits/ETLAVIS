//GET INPUT FROM USER AND CHANGE TENS DIGIT TO ZERO AND PRINT 
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    if(a<100 || a>999){
        printf("enter a three digit number");
    }
    b=a%10;
    c=a/100;
    printf("%d%d%d",c,0,b);
    return 0;
}