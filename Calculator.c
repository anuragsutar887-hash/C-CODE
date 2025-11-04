#include<stdio.h>
int main(){
    float n1,n2;
    int op;
    char ch;
    do{
        printf("\n----------Calculator Menu--------\n");
        printf("1.Add\n");
        printf("2.Sub\n");
        printf("3.Mul\n");
        printf("4.Divide\n");
        printf("\nEnter Numbers :  ");
        scanf("%f %f",&n1,&n2);
        printf("\nEnter A Choice(1-4) : ");
        scanf("%d",&op);
        switch(op){
            case 1:
            printf("Result = %.2f",n1+n2);
            break;
            case 2:
            printf("Result = %.2f",n1-n2);
            break;
            case 3:
            printf("Result = %.2f",n1*n2);
            break;
            case 4:
            if(n2!=0){
            printf("Result = %.2f",n1/n2);
            }
            else{
                printf("Errorrrrrrrrrrrrrrrr");
            }
            break;
            default:
            printf("Invalid Choice");
        }
        do{
            printf("\nDo you want to Perform Another Calculation(y/n) : ");
            scanf(" %c",&ch);
            if(ch!='N' && ch!='n'&& ch!='Y'&& ch!='y'){
                printf("Please Enter Only (Y/n)");
            }
        }while(ch!='N' && ch!='n'&& ch!='Y'&& ch!='y');
    
    }while(ch =='Y' || ch == 'y');
    
    printf("Thanks! Goodbye!!!!!!!!!!!!");
    return 0;
}