#include<stdio.h>
int main(){
    int r=0,c=0,n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    while(r<=n){
        c=1;
        while(c<=r){
            printf(" %d",c);
            c++;
        }
        printf("\n");
        r++;
    }
    return 0;
}