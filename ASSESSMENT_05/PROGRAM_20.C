//PRINT THE TOTAL NUMBER OF SINGLE DIGIT PRIME NUMBER 
#include<stdio.h>
int main(){
    int a, b, c=0;
    for(a=2;a<10;a++){
        for(b=2;b*b<=a;b++){
            if(a%b==0){
                break;
            }
        }
        if(b*b>a){
            c++;
        }
    }
    printf("%d",c);
}