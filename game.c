#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int g;
    int min=10,max=100;
    srand(time(0));
    int n=rand() % (max-min+1)+min;
    printf("Enter Your Guess Between (10-100) : \n");
    do{
        printf("Enter A Guess : ");
        scanf("%d",&g);
        if(g>n){
            printf("Your Guess is Too High\n");
        }
        else if(g<n){
            printf("Your Guess is Too Low\n");
        }
        else{
            printf("Hurray!  Correct Guess\n");
        }
    }while(g!=n);
return 0;
}
