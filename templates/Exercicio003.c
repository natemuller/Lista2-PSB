#include <stdio.h>

#define MAX 100

int conta_repetidos(int *vet, int tam);

int main() {
  int vet[MAX], tam;
  scanf("%d", &tam);
  if ( tam > MAX )
     return 1;
  for (int i=0; i < tam; ++i)
      scanf("%d", &vet[i]);
  printf("%d\n", conta_repetidos(vet, tam));
  return 0;
}


