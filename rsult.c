#include<stdio.h>
int main(){
    int p,c,m,b,co,mo;
    float per;
    printf("Enter All Marks(out of 100) : ");
    scanf("%d %d %d %d %d",&p,&c,&m,&b,&co);
    mo=p+c+m+b+co;
    per=(mo/500.0)*100;
    if(per>=90){
        printf("Grade A");
    }
    else if(per>=80){
        printf("Grade B");
    }
    else if(per>=70){
        printf("Grade C");
    }
    else if(per>=60){
        printf("Grade D");
    }
    else{
        printf("Fail");
    }
    return 0;



}