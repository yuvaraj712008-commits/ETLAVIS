//PRINT THE TOTAL NUMBER OF SINGLE DIGIT PERFECT SQUARE NUMBER IN THE USER GIVEN INPUT
#include<stdio.h>
int main(){
    int a, b, c=0;
    scanf("%d",&a);
    for(int i=a;i>0;){
        b=i%10;
        if((b==1)||(b==4)||(b==9)){
            c++;
        }
        i=i/10;
    }
    printf("%d",c);
}