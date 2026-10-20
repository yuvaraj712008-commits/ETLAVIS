//CHECK WHETHER THE TWO DIGITS ARE SAME (EQUAL)
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    if(b==c){
        printf("SUCCESS");
    }
    else{
        printf("FAILURE");
    }
}