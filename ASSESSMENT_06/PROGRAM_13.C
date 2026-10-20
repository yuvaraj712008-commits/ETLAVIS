//PRINT THE REVERSE OF THE INPUT NUMBER 
#include<stdio.h>
int main(){
    int a, b=0,c=0;
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        c=(c*10)+b;
        a=a/10;
    }
    printf("%d",c);
}