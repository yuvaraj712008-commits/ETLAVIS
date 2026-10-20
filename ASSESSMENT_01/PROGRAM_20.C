//GET A NUMBER FROM THE USER AND SUBTRACT 5 FROM IT IF THE SECOND LAST DIGIT IS ODD AND DISPLAY THE RESULT
#include<stdio.h>
int main(){
    int a,c,b,d;
    scanf("%d",&a);
    b=a%10;
    d=((a/10)%10)+b;
    c=(d%2==1)?(a-5):a;
    printf("%d",c);
    return 0;
}