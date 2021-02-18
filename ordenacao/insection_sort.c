#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *v, int l, int r)
{
  // colocando o menor elemento no início do vetor
  for (int i = r; i > l; --i)
  {
    if (v[i - 1] > v[i])
    {
      int tmp = v[i - 1];
      v[i - 1] = v[i];
      v[i] = tmp;
    }
  }
  for (int i = l + 2; i <= r; ++i)
  {
    int j = i;
    int tmp = v[j];

    while (tmp < v[j - 1])
    {
      v[j] = v[j - 1];
      --j;
    }

    v[j] = tmp;
  }

  for (int i = 0; i < 7; ++i)
  {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main(void)
{
  int v[] = {5, 10, 3, 7, 8, 9, 1};

  insertion_sort(v, 0, 6);

  return 0;
}