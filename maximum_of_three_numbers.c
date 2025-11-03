#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter A Numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2){
        if(num1>num3){
            printf("NUM1 is Greater. ");
        }
        else{
            printf("NUM3 is Greater. ");
        }
    }
    else{
        if(num2>num3){
        printf("NUM2 is Greater. ");
        }
        else{
            printf("NUM3 is Greater. ");
        }
        
    }
    return 0;
}