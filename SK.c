#include<stdio.h>
int main(){
    int Num1,Num2,Sum,Sub,Mul,Div;
    
    printf("Enter Num1: ");
    scanf("%d",&Num1);
    printf("Enter Num2 : ");
    scanf("%d",&Num2);
    Sum=Num1+Num2;
    Sub=Num1-Num2;
    Div=Num1/Num2;
    Mul=Num1*Num2;
    printf("Sum=%d\n",Sum);
    printf("Sub=%d\n",Sub);
    printf("Div=%d\n",Div);
    printf("Mul=%d\n",Mul);
    return 0;


}