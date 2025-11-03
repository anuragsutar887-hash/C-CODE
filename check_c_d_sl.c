#include<stdio.h>
int main(){
    char ch;
    printf("Enter A Char : ");
    scanf("%c",&ch);
    if(ch >='0' && ch <='9'){
        printf("Digit");
    }
    else if(ch <='Z' && ch >='A' || ch <='z' && ch >='a'){
        printf("Char");
    }
    else{
        printf("Special Char");
    }
    return 0;
}