#include<stdio.h>
int main(){
    int n,sum=0,temp,fac,i,d;
    printf("Enter A Number : ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        d=n%10;
        fac=1;
        for(i=1;i<=d;i++){
            fac*=i;
        }
        sum+=fac;
        n=n/10;
    }
    if(temp==sum){
        printf("Strong Number");
    }
    else{
        printf("Not A Strong Number");
    }
    return 0;
}