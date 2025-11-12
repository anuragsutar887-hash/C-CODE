#include<stdio.h>
int main(){
    int i,num,j;
    
    
        printf("Enter Number of Rows : ");
        scanf("%d",&num);
        for(i=1;i<=num;i++){
            for(j=1;j<=i;j++){
                printf(" %d",64+i);
            }
            printf("\n");
        }
    return 0;
}