//PRINT THE SUM ALL OF DIGITS IN THE INPUT NUMBER 
#include<stdio.h>
int main(){
    int a, b=0,c=0;
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        c=c+b;
        a=a/10;
    }
    printf("%d",c);
}