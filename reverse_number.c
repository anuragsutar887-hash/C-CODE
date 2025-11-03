#include<stdio.h>
int main(){
    int num,reverse_num=0,remainder;
    printf("Enter A Number : ");
    scanf("%d",&num);
    while(num>0){
        remainder=num%10;
        reverse_num=reverse_num*10+remainder;
        num=num/10;
    }
    printf("Reversed Number : %d",reverse_num);
    return 0;
}