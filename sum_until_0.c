#include<stdio.h>
int main(){
    int n,s=0;
    do{
        printf("Enter Numbers to  Sum(Enter '0' to End) : ");
        scanf("%d",&n);
        s+=n;
    }
    while(n!=0);
        printf("Total Sum : %d",s);
    return 0;
}