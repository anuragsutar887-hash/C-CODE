#include <stdio.h>

int main() {
    char month;

    printf("Enter month name: ");
    scanf("%c",&month);

    switch (month) {

        case 'J':
        // case 'january':
                printf("January has 31 days");
            break;

        case 'F':
        // case 'february':
            printf("February has 28 or 29 days");
            break;

        case 'M':
        // case 'march':
                printf("March has 31 days");
           
            break;

        case 'A':
        // case 'april':
           
                printf("April has 30 days");
            break;

        default:
            printf("Invalid month name!");
    }

    return 0;
}
