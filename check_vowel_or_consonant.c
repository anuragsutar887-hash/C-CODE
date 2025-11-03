#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Alphabet : ");
    scanf("%c",&ch);
    if((ch <='Z' &&ch >='A') || (ch >='a' && ch <='z')){
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            printf("%c is Vowel.",ch);
        }
        else{
            printf("%c is Cosonant.",ch);
        }
        }
    else{
        printf("%c is not an alphabet.",ch);
    }
    
    return 0;
}