/*Scrivere un programma in c che dopo aver inserito un vettore di N numeri interi separi il vettore
inserito in 2 ulteriori vettori il primo contenente i numeri pari ed il secondo con i numeri dispari*/

#include <stdio.h>

int main(void) {
    int n;
  printf("inserisci dei numeri pari o dispari ");
  scanf("%d", &n);
  int v[n];
  printf("Inserisci %d numeri interi :", n);
  for (int i = 0; i < n; i++) {
      scanf("%d", &v[i]);
  }
  int vPari[n];
  int vDispari[n];
  for(int i=0; i<n; i++){
    if(v[i]%2==0){
      vPari[i]=v[i];
      printf("\nil numeri pari sono %d ", vPari[i]);
    }
    if(v[i]%2!=0){
      vDispari[i]=v[i];
      printf("\ni numeri dispari sono %d ", vDispari[i]);
    }
  }
  return 0;
}
