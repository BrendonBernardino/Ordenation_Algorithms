#include <stdio.h>

int bubblesort(void) {
int v[5];
int aux;
int n = 5;

printf("\n-----BUBBLE SORT-----\n\n");
printf("Digite 5 numeros aleatorios:\n");

scanf("%d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4]);

printf("Numeros possivelmente desordenados:\n%d\n%d\n%d\n%d\n%d\n", v[0], v[1], v[2], v[3], v[4]);

for(int j = 0; j < n-1; j++) {
  for(int i = 0; i < n-1; i++) {
    if(v[i] > v[i+1]) {
      aux = v[i];
      v[i] = v[i+1];
      v[i+1] = aux;
    }
  }
}

printf("Numeros ordenados:\n%d\n%d\n%d\n%d\n%d\n", v[0], v[1], v[2], v[3], v[4]);
  return 0;
}