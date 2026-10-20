//GET A NUMBER FROM THE USER AND SUBTRACT 5 FROM IT IF THE SECOND LAST DIGIT IS ODD AND DISPLAY THE RESULT
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    b=(a/10)%10;
    c=(b%2==1)?(a-5):a;
    printf("%d",c);
    return 0;
}