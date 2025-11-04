#include<stdio.h>
int main(){
    int n;
    
    do{
        printf("Enter A Number : ");
        scanf("%d",&n);
        if(n<=0){
            printf("Invalid Validation\n");
        }
    }
    while(n<=0);
    printf("You Entered +ve Number");
    return 0;
}