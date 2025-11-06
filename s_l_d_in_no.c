#include<stdio.h>
int main(){
    int rem,n,s=9,l=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        if(rem<s)
            s=rem;
        
        if(rem>l)
            l=rem;
        
        n=n/10;
    }
    printf("%d is smallest",s);
    printf("\n%d is Largest",l);
    return 0;
}