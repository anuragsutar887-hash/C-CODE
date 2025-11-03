#include<stdio.h>
int  main(){
    char a;
    printf("ENter A char : ");
    scanf("%c",&a);
    if((a >='A' && a<='Z') || (a>='a' && a<='z')){
        printf("%c is  a alphabet",a);
    }
    else{
        printf("%c is not a alphabet",a);
    }
    return 0;
}