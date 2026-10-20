//CHECK PRIME OR NOT 
#include<stdio.h>
int main(){
    int a, b=0, i=2;
    scanf("%d",&a);
    if(a<1){
        printf("NOT PRIME\n");
        return 0;
    }
        while(i*i<=a){
        if(a%i==0){
            b=1;
            printf("NOT PRIME");
            break;
        }
        i++;
    }
    if(b==0){
        printf("PRIME");
    }
}