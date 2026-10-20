//PRINT THE NUMBER OF DIGITS IN THE INPUT NUMBER 
#include<stdio.h>
int main(){
    int a, b=0;
    scanf("%d",&a);
    for(int i=a;i>0;){
        i=i/10;
        b++;
    }
    printf("%d",b);
}