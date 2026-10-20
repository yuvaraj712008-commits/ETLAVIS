//GET ANUMBER FROM THE USER AND SUBTRACT 5 FROM IT if ODD AND DISPLAY THE RESULT
#include<stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    c=(a%2==1)?(a-5):a;
    printf("%d",c);
    return 0;
}