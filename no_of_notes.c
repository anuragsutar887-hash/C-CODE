#include<stdio.h>

int main(){
int amount;
int n500,n200,n100,n50,n20,n10,n5,n1;
printf("Enter A Amount : ");
scanf("%d",&amount);
n500=amount/500;
amount=amount%500;
n200=amount/200;
amount=amount%200;
n100=amount/100;
amount=amount%100;
n50=amount/50;
amount=amount%50;
n10=amount/10;
amount=amount%10;
n5=amount/5;
amount=amount%5;
n1=amount/1;
amount=amount%1;
printf("total Notes :  \n");
printf("500 = %d\n",n500);
printf("200 = %d\n",n200);
printf("100 = %d\n",n100);
printf("50 = %d\n",n50);
printf("10 = %d\n",n10);
printf("5 = %d\n",n5);
printf("1 = %d\n",n1);
return 0;
}