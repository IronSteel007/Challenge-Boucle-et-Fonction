#include <unistd.h>
#include <stdio.h>
int main(){
    int nbr, inv = 0;  // nbr = nombre  et inv = inverse 
    printf("donner le nombre : ");
    scanf("%d", &nbr); 
    while (nbr) {   // la boucle utilisée
        inv *= 10;  //  inverse = inverse * 10
        inv += nbr % 10;  // inverse = inverse + (modulo du nombre donner )
        nbr /= 10;}      // nombre =  nombre sur 10
    printf("%d\n", inv);  // résultat final
    return 0;}
