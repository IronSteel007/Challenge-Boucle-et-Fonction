#include <stdio.h>

int main() {
    int number, i;
    printf("entee un nombre: ");
    scanf("%d", &number);

    for(i = 2; i < number; i++) {
        if(!(number % i)) {
            printf("%d ce n\'est pas un nombre premier",number);
            return 0;
        }
    }

    printf("%d est un nombre premier");
    return 0;
}
