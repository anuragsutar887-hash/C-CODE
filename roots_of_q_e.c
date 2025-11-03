#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d,root1,root2;
    printf("Enter a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b-4*a*c);
    if(d>0){
        printf("Roots are Real and Different.");
        root1=(-b+sqrt(d))/2*a;
        root2=(-b-sqrt(d))/2*a;
        printf("Root1 = %d\nRoot2 = %d",root1,root2);
    }
    else if(d==0){
        printf("Roots are REal and Equal.");
        root1=-b/2*a;
        printf("Root1 = Root2 = %d",root1);
    }
    else{
        printf("Roots Not Exist.");
    }
    return 0;
    

}