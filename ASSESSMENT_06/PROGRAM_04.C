//PRINT THE SUM OF 6 TO 1 
#include<stdio.h>
int main(){
    int a=6,b=0;
    while(a>0){
        b+=a;
        a--;
    }
    printf("%d",b);
}