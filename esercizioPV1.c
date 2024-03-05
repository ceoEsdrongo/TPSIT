/*Dopo aver caricato in memoria un 2 vettori di uguale dimensione composti da numeri interi
scrivere in output un terzo vettore dato dalla somma delle componenti fatta a una a una (Vettore
somma).*/
#include <stdio.h>
int main(){
        int dim;
            printf("inserisci la dimensione del vettore\n");
            scanf("%d", &dim);
        int vet1[dim];
        int vet2[dim];
        int somma[dim];
            printf("inserisci i numeri del primo vettore\n");
        for(int i=0;i<dim;i++){
            scanf("%d", &vet1[i]);
        }
            printf("inserisci i numeri del secondo vettore\n");
        for(int i=0;i<dim;i++){
            scanf("%d", &vet2[i]);
        }   
            printf("la somma dei vettori risulta:\n");
        for(int i=0; i<dim; i++){
            somma[i]=vet1[i]+vet2[i];
            printf("%d ",somma[i]);
        }
    return 0;
}
