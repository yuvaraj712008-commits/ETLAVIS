//CHECK PRIME OR NOT 
#include<stdio.h>
int main(){
    int a, b=0, i;
    scanf("%d",&a);
        for(i=2;i*i<=a;i++){
        if(a%i==0){
            b=1;
            printf("NOT PRIME");
            return 0;
        }
    }
    if(b==0){
        printf("PRIME");
    }
}