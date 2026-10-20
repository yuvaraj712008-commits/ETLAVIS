//PRINT THE TWO DIGIT ODD NUMBERS IN THE USER GIVEN INPUT 
#include<stdio.h>
int main(){
    int a, b, c, d=0;
    scanf("%d",&a);
    for(int i=a;i>10;){
        b=i%10;
        c=(i/10)%10;
        if(b%2==1){
            d++;
        }
        i=i/10;
    }
    printf("%d",d);
}