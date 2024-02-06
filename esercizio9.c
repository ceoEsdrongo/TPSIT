/*Una banca vuole conoscere alcune informazioni sulle proprie azioni detenute in portafoglio.
Scrivere il programma in c che dopo aver inserito da tastiera la data di acquisto (giorno,mese,anno)
dell’azione e il suo prezzo determini e visualizzi in Output:
1) La somma dei prezzi delle azioni;
2) La media dei prezzi delle azioni;
3) La data di acquisto ed il valore dell’azione con il prezzo massimo;
4) La data di acquisto ed il valore dell’azione con il prezzo minimo;
5) La media dei prezzi delle azioni con un importo compreso tra 2,50 e 3,50 euro, estremi inclusi.
Il programma deve permettere il reinserimento della data e del prezzo delle azioni.

PS: per semplicità ipotizzare 30 giorni per ogni mese; Anni: max 10 .*/

#include <stdio.h>
int main(){
    int giorno,mese,anno,conto=0,controllo,giorno_max,giorno_min,mese_max,mese_min,anno_max,anno_min,prezzo_min,prezzo_max,Max,Min;
    float prezzo,media=0,prezzo_max,prezzo_min,portafoglio=0;
    do{
    do{
        printf("in che giorno la banca ha aquistato l'azione\n");
        scanf("%d", &giorno);
    }while(giorno<1||giorno>30);

     do{
        printf("in che mese la banca ha aquistato l'azione\n");
        scanf("%d", &mese);
    }while(mese<1||mese>12);

     do{
        printf("in che anno la banca ha aquistato l'azione\n");
        scanf("%d", &anno);
    }while(anno<2014||giorno>2024);
    do{
        printf("inserisci il prezzo\n");
        scanf("%f", &prezzo);
    }while(prezzo<1);
    conto++;
    portafoglio+=prezzo;
    media=portafoglio/conto;
    printf("la somma risulta %.2f , la media risulta %.2f \n",portafoglio, media);
    printf("vuoi ripetere il programma? 1.Si 2.No \n");
    scanf("%d", &controllo);
   

    }while(controllo==1);

     if(prezzo>Max){
        giorno_max=giorno;
        mese_max=mese;
        anno_max=anno;
        prezzo_max=prezzo;
    }
    if(prezzo<Min){
        giorno_min=giorno;
        mese_min=mese;
        anno_min=anno;
        prezzo_min=prezzo;
    }
    printf("la data di aquisto e valore massimo risulta %d \n", Max);
    printf("la data di aquisto e valore minimo risulta %d \n", Min);



    return 0;
}
