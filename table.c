#include<stdio.h>
int main(){
    int n,i;
    printf("Enter A Number : ");
    scanf("%d",&n);
    printf("Table : ");
    for(i=1;i<11;i++){
        
        printf("\n%d",i*n);
    }
    return 0;
}