#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;        
    }
    printf("Sum : %d",sum);
    return 0;
}