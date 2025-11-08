#include<stdio.h>
int main(){
    int n,sum,rem,temp;
    printf("Enter A Number : ");
    scanf("%d",&n);
    temp=n;
    while(sum!=1 && sum!=4){
        sum=0;
            while(n>0){
            rem=n%10;
            sum+=rem*rem;
            n=n/10;
        }
    n=sum;
    }
    if(sum==1){
    printf("%d is A Happy Number",temp);
    }
    else{
        printf("%d Not happy Number",temp);
    }
    return 0;
}