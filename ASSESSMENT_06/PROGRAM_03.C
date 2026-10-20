//PRINT THE SUM OF 1 TO 5
#include<stdio.h>
int main(){
    int a=1,b=0;
    while(a<6){
        b+=a;
        a++;
    }
    printf("%d",b);
}