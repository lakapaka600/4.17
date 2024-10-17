#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numeriDaSommare;
    int num;
    int numAss;
    int i=1;
    printf("Inserisci numeri da sommare: ");
    scanf("%d", &numeriDaSommare);
    while (i <= numeriDaSommare) {
        i++;
        printf("Inserisci numero: ");
        scanf("%d", &num);
        numAss += abs(num);

    }
    printf("somma valori assoluti : %d",numAss);
    return 0;
}
