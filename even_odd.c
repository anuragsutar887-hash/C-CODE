#include<stdio.h>
int main(){
    int Number;
    printf("Enter a Number: ");
    scanf("%d",&Number);

    if(Number%2==0){
        printf("number is Even");
    }
    else{
        printf("Number is Odd");
    }


    return 0;
}