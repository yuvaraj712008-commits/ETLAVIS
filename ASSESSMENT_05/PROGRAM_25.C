//PRINT THE TOTAL NUMBER OF SINGLE DIGIT PRIME NUMBERS IN THE USER GIVEN INPUT
#include<stdio.h>
int main(){
    int a, b, c=0;
    scanf("%d",&a);
    for(int i=a;i>0;){
        b=i%10;
        if(b==2 || b==3 || b==5 || b==7){
            c++;
        }
        i=i/10;
    }
    printf("%d",c);
}