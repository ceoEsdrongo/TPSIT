#include <stdio.h>
#include <string.h>
int main(){
    // Dichiarazione delle variabili
    int i = 0, voc = 0, lung = 0;
    char str[20];
    printf("Inserisci la stringa\n");
    scanf("%s", str);
    lung = strlen(str);
    printf("La lunghezza della stringa risulta essere: %d\n", lung);
    for(i = 0; i < lung; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            voc++;
    }
    printf("Le vocali presenti nella stringa sono: %d\n", voc);
}
