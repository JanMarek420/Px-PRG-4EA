#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    int D;
      
    printf("Zadejte koeficient a: ");
    if (scanf("%d", &a) != 1) {
        printf("Chyba: Neplatny vstup\n");
        exit(1);
    }
    
    printf("Zadejte koeficient b: ");
    if (scanf("%d", &b) != 1) {
        printf("Chyba: Neplatny vstup\n");
        exit(1);
    }
    
    printf("Zadejte koeficient c: ");
    if (scanf("%d", &c) != 1) {
        printf("Chyba: Neplatny vstup\n");
        exit(1);
    }
    
    D = b * b - 4 * a *c;
    
    if (D < -999 || D > 999){
    printf ("Error: diskriminant mimo rozsah\n" );
    exit(1);
    }
    
    printf("+-------+-------+-------+-------+\n");
    printf("|%6d |%6d |%6d |%6d |\n", a, b, c, D);
    printf("+-------+-------+-------+-------+\n");
    
    if (D > 0) {
        printf("|%32s|\n", "Dva kořeny");
    } else if (D == 0) {
        printf("|%32s|\n", "Jeden kořen");
    } else {
        printf("|%32s|\n", "Imaginarni kořen");
    }
    printf("+-------------------------------+\n");

    return 0;
}