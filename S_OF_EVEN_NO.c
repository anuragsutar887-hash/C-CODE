#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    while(n>0){
        if(n%2==0){
            sum=sum+n;
            
        }
        n=n-2;
    }
    printf("Sum : %d",sum);
    return 0;
}