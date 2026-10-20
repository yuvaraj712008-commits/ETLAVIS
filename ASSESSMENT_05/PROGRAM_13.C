//PRINT THE REVERSE OF THE INPUT NUMBER 
#include<stdio.h>
int main(){
    int a, b=0,c=0;
    scanf("%d",&a);
    for(int i=a;i>0;){
        b=i%10;
        c=(c*10)+b;
        i=i/10;
    }
    printf("%d",c);
}