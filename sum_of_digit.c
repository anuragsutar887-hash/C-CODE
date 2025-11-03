#include<stdio.h>
int main(){
    int num,remainder,sum=0;
    printf("Enter A Number : ");
    scanf("%d",&num);
    while(num>0){
        remainder=num%10;
        sum=sum+remainder;
        num=num/10;
    }
    printf("Sum = %d",sum)
    return 0;
}