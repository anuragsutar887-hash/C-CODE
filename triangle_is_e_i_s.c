#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Sides of Triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        if(a==b && b==c){
            printf("Triangle is Equilateral.");
        }
        else if(a==b || b==c || c!=a){
            printf("Triangle is Isosceles. ");
        }
        else{
            printf("Triangle is Scalane.");
        }
    }
    else{
        printf("Triangle is Invalid. ");
    }
    return 0;
}