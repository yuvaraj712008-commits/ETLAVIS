
#include<stdio.h>
int main(){
    int a,c,d=0;
    scanf("%d",&a);
    if(a<10 || a>99){
        printf("Please enter a two digit number");
        return 0;
    }
    c=a%10;
    d=d+c;
    c=(a/10)%10;
    d=d+c;
    c=a/100;
    d=d+c;
    printf("%d",d);
    return 0;
}