//PRINT THE TOTAL NUMBER OF TWO DIGIT PERFECT SQUARE NUMBER IN THE USER GIVEN INPUT
#include<stdio.h>
int main(){
    int a, b, c, d,e=0;
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        c=(a/10)%10;
        d=(c*10)+b;
        if(d>=10 && d<=99){
            if(d==16 || d==25 || d==36 || d==49 ||d==64 || d==81){
                e++;
            }
        }
        a=a/10;
    }
    printf("%d",e);
}
