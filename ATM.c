#include<stdio.h>
int main(){
    float balance=1000,amt;
    int chioce;
    do{
        printf("\n--------------1.Check Balance----------------\n");
        printf("-------------2.Cash Deposit----------\n");
        printf("--------------3.Cash Withdrawal-------------\n");
        printf("-------------4.Exit------------------\n");
        printf("Enter Your Chioce :");
        scanf("%d",&chioce);
        
        switch(chioce){
            case 1:
            printf("Your Balance : %.2f\n",balance);
            break;
            case 2:
            printf("Enter Deposit Amount : \n");
            scanf("%f",&amt);
            balance+=amt;
            printf("Amount Deposited Successfully!!!!!!!!!!!!\n");
            break;
            case 3:
            printf("Enter Withdrawal Amount : ");
            scanf("%f",&amt);
            if(amt<=balance){
                balance-=amt;
                printf("\nWithdrawal Successful!!!!!!!!!!!!\n");
            }
            else{
                printf("Insufficient Balance!!!!!!!!!!!!\n");
            }
            break;
            
            
            case 4:
            printf("Thanks For Using My ATM\n");
            break;
            default:
            printf("Invalid");
        }
        
    }
    while(chioce!=4);
    return 0;
}