#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter A numbers :  ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        printf("num1 is Greater.");
    }

    else{
        printf("num2 is Greater. ");
    }
    return 0;
}