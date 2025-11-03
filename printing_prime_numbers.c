#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter the number up to which you want prime numbers: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++) {
        count = 0; // reset for every i

        for(j = 1; j <= i; j++) {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d \n ", i );
    }

    return 0;
}
