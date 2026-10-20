//PRINT THE TOTAL NUMBER OF SINGLE DIGIT PRIME NUMBER 
#include<stdio.h>
int main(){
    int a=2, b, c=0;
    while(a<10){
        b=2;
        while(b*b<=a){
            if(a%b==0){
                break;
            }
            b++;
        }
        if(b*b>a){
            c++;
        }
        a++;
    }
    printf("%d",c);
}