#include<stdio.h>
char main(){
    char ch;
    printf("Enter A Char : ");
    scanf("%c",&ch);
    if(ch <='Z' && ch >='A'){
        printf("Uppercase");
    }
    else if(ch <='z' && ch >='a'){
        printf("Lowercase");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}