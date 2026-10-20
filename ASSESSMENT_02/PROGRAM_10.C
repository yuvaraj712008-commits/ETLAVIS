//CHECK THE INPUTS TENS DIGIT IS LESSER THAN ONES DIGIT 
#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    if(b>c){
        printf("1");
    }
    else{
        printf("0");
    }
}