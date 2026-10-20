//PRINT THE HCF OF TWO NUMBERS FROM USER GIVEN INPUTS 
#include<stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d %d",&a,&b);
    c=(a<b)?a:b;
    for(;;){
        if(a%c==0 && b%c==0){
            printf("%d",c);
            break;
        }
        c--;
    }
    return 0;
}