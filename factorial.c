#include<stdio.h>
int main(){
    int n,i,fac=1;
    printf("Enter A Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fac=fac*i;
    }
    printf("Factorial of %d : %d",n,fac);
    return 0;
}