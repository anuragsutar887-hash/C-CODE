#include<stdio.h>
int main(){
    int num,remainder,result=0,original_no;
    printf("Enter A number : ");
    scanf("%d",&num);
    original_no=num;
    while(num>0){
        remainder=num%10;
        result+=remainder*remainder*remainder;
        num=num/10;
    }
    if(result==original_no){
        printf("Armstrong Number");
    }
    else{
        printf("Not Amstrong Number");
    }
    return 0;
}