//PRINT THE ODD NUMBERS BETWEEN 11 TO 20
#include<stdio.h>
int main(){
    int a=11, b;
    while(a<20){
        if(a%2==1){
            printf("%d\n",a);
        }
        a++;
    }
}