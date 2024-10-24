#include <stdio.h>

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
        if (num<0){
        numAss =numAss + num;
         }
    else if (num>-1){
    numAss = numAss + num;
    }   
     } 
    printf("somma valori assoluti : %d",numAss);
    return 0;
}
