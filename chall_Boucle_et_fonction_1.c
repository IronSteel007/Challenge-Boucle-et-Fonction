#include <stdio.h>

int main() {
    int number, i;
    printf("please enter a valid number: ");
    scanf("%d", &number);


    for (i = 1; i <= 100; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}
