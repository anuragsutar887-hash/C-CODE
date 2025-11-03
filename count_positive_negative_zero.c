#include<stdio.h>
int main(){
    int A, B, C, D, E;
    int Positive = 0, Negative = 0, Zero = 0;


    printf("Enter A : ");
    scanf("%d", &A);
    printf("Enter B : ");
    scanf("%d", &B);
    printf("Enter C : ");
    scanf("%d", &C);
    printf("Enter D : ");
    scanf("%d", &D);
    printf("Enter E : ");
    scanf("%d", &E);

    if(A > 0) Positive++;
    else if(A < 0) Negative++;
    else Zero++;

    if(B > 0) Positive++;
    else if(B < 0) Negative++;
    else Zero++;

    if(C > 0) Positive++;
    else if(C < 0) Negative++;
    else Zero++;

    if(D > 0) Positive++;
    else if(D < 0) Negative++;
    else Zero++;

    if(E > 0) Positive++;
    else if(E < 0) Negative++;
    else Zero++;

    printf("Number of Positive Numbers : %d\n",Positive);
    printf("Number of Negative  Numbers : %d\n",Negative);
    printf("Number of Zero Numbers : %d\n",Zero);
    return 0;
}