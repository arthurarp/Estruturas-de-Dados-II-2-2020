#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, aux;
  int soma_geral = 0;

  scanf("%d", &n);

  while (n--)
  {
    scanf("%d", &aux);
    soma_geral += aux;
  }

  printf("%d\n", soma_geral);

  return 0;
}