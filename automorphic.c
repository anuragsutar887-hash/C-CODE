#include<stdio.h>
int main(){
    int num,sq,temp,d1,d2,flag=1;
    printf("Enter A Number : ");
    scanf("%d",&num);
    sq=num*num;
    temp=num;
    while(temp>0){
        d1=temp%10;
        d2=sq%10;
    
    if(d1!=d2){
        flag=0;
        break;
    }
    temp=temp/10;
    sq=sq/10;
    }
    if(flag==1){
        printf("Automorphic");
    }
    else{
        printf("Not Automorphic");
    }
    return 0;
}