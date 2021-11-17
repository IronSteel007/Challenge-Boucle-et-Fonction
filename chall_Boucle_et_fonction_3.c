#include <stdio.h>

int main() {
    int number, i;
    printf("entee un nombre: ");
    scanf("%d", &number);

    for(i = 2; i < number; i++) {
        if(!(number % i)) {
            printf("ce n\'est pas un nombre premier");
            return 0;
        }
    }

    printf("est un nombre premier");
    return 0;
}
