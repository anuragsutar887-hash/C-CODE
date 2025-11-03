#include<stdio.h>

int main(){
    float numb1, numb2, operation, answer;

    //storing values
    printf("enter first number :");
    scanf("%f",&numb1);
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division\n");
    scanf("%f",&operation);
    printf("enter second number  :");
    scanf("%f",&numb2);
    
    if(operation==1){
       answer=numb1+numb2;
       printf("answer: %.2f",answer);
    }else if(operation==2){
        answer=numb1-numb2;
        printf("answer: %.2f",answer);
    }else if(operation==3){
        answer=numb1*numb2;
        printf("answer: %.2f",answer);
    }else if(operation==4){
        answer=numb1/numb2;
        printf("answer: %.2f",answer);
    }else{
        printf("not valid");
    }

       



    
    





    




    
    return 0;
}