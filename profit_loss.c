#include<stdio.h>
int main(){
    int buy_price,sell_price,p,l;
    printf("Enter Buy Price & Sell Price :  ");
    scanf("%d %d",&buy_price,&sell_price);
    p=sell_price-buy_price;
    l=buy_price-sell_price;
    if(sell_price>buy_price){
        printf("You Have A Profit. \n");
        printf("Profit= %d",p);

    }
    else{
        printf("You Have Loss.\n");
        printf("Loss= %d",l);
    }
    return 0;

}