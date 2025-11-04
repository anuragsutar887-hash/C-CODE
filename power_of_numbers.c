#include<stdio.h>
int main(){
    int b,e,p=1,i=1;
    printf("Enter A Base & Exponent : ");
    scanf("%d %d",&b,&e);
    while(i<=e){
        p*=b;
        i++;
    }
    printf("%d^%d=%d",b,e,p);
    return 0;

}