#include <stdio.h>

int main() {
    int ligne, i, j, s;

    printf("enter the number of ligne of your triangle: ");
    scanf("%d", &ligne);

    for(i = 1; i <= ligne; i++) {
        for(s = 0; s < ligne - i; s++) {
            printf(" ");
        }
        
        for(j = 0; j < (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}
