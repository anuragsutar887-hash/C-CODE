#include<stdio.h>
int main(){
    int i=1,n,square;
    printf("Enter A Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        square=i*i;
        printf("SQUARE= %d\n",square);
    }
    return 0;
}