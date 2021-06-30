#include <stdio.h>

int main(void) {
int v[10];
int aux, aux2;
int n = 10;

printf("\n-----SHELL SORT-----\n\n");
printf("Digite 10 numeros aleatorios:\n");

scanf("%d %d %d %d %d %d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5], &v[6], &v[7], &v[8], &v[9]);

printf("Numeros possivelmente desordenados:\n%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7], v[8], v[9]);

for(int ciclo = 0; ciclo < n-1; ciclo++) {
  for(int i = 0; i < n-2; i = i+2) { //roda de par em par
    if(v[i] > v[i+2]) {
      aux = v[i];
      v[i] = v[i+2];
      v[i+2] = aux;
    }
  }
}

for(int ciclo2 = 0; ciclo2 < n-1; ciclo2++) {
  for(int j = 1; j < n-1; j = j+2) { //roda de impar em impar
    if(v[j] > v[j+2]) {
      aux2 = v[j];
      v[j] = v[j+2];
      v[j+2] = aux2;
    }
  }
}

for(int j = 0; j < n-1; j++) {
  for(int i = 0; i < n-1; i++) {
    if(v[i] > v[i+1]) {
      aux = v[i];
      v[i] = v[i+1];
      v[i+1] = aux;
    }
  }
}

printf("Numeros ordenados:\n%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7], v[8], v[9]);
  return 0;
}