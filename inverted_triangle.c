#include<stdio.h>
int main(){
    int n,row,sp,st;
    printf("Enter A Row Numbers : ");
    scanf("%d",&n);
     row=n;
    while(row>=1){
        sp=1;
        while(sp<=n-row){
            
            printf(" ");
            sp++;
        }
        st=1;
        while(st<=2*row-1){
            
            printf("*");
            st++;
        }
        printf("\n");
        row--;

    }
    
    return 0;
}