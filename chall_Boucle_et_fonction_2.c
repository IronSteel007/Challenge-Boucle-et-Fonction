#include <stdio.h>

int main() {
    int rows, i, j, s;

    printf("enter the number of rows of your triangle: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(s = 0; s < rows - i; s++) {
            printf(" ");
        }
        
        for(j = 0; j < (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}
