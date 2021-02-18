#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int aux;
  int quantidade = 0;

  while (scanf("%d", &aux) != EOF)
  {
    quantidade++;
  }

  printf("%d\n", quantidade);

  return 0;
}