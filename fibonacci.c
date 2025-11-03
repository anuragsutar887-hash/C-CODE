#include<stdio.h>
int main(){
    int i,j,k,l;
    printf("Enter A Number : ");
    scanf("%d",&l);
    i=0;
    j=1;    
    printf("%d\n%d\n",i,j);
    k=i+j;
    while(k<=l){
        printf("%d\n",k);
        i=j;
        j=k;
        k=i+j;
    }
    return 0;
}