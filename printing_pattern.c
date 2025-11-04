#include<stdio.h>
int main(){
    int i=0,n,c=0;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    while(i<=n){
        c=1;
        while(c<=i){
        printf("*");
        c++;
        }
        printf("\n");
        i++;
    }
    return 0;
}