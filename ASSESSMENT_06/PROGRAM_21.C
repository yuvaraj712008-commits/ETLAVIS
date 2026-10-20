//FIND THE TOTAL NUMBER OF ODD DIGITS IN THE USER GIVEN INPUT 
#include<stdio.h>
int main(){
    int a, b, c=0;
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        if(b%2==1){
            c++;
        }
        a=a/10;
    }
    printf("%d",c);
}