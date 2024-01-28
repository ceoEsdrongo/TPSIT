#include <stdio.h>

int main() {
    int soldi, panino = 1, pastina = 2, conto = 0,scelta;

    printf("Quanti soldi ha Mario?\n");
    scanf("%d", &soldi);

    do {

        printf("Cosa mangerà Mario oggi? 1 per panino, 2 per pastina: ");
        scanf("%d", &scelta);

        if (scelta == 1) {
            if (soldi >= 1.5) {
                soldi -= 1.5;
                conto++;
            } else {
                printf("Mario non ha abbastanza soldi per il panino.\n");
            }
        } else if (scelta == 2) {
            if (soldi >= 1) {
                soldi -= 1;
                conto++;
            } else {
                printf("Mario non ha abbastanza soldi per la pastina.\n");
            }
        } else {
            printf("Scelta non valida. Riprova.\n");
        }

        printf("Mario ha ancora fame? (Attuali soldi: %d €)\n", soldi);

    } while (soldi >= 1);

    printf("Mario ha mangiato per %d giorni e ha speso in totale %d €.\n", conto, conto * 1);
    return 0;
}
