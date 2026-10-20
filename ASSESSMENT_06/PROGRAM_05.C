//PRINT ODD NUMBERS BETWEEN 1 TO 9
#include<stdio.h>
int main(){
    int a=1;
    while(a<10){
        if(a%2==1){
            printf("%d\n",a);
        }
        a++;
    }
}