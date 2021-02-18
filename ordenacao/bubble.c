#include <stdio.h>
#include <stdlib.h>

int bubble_sort(int *v, int l, int r)
{
  for (int i = l; i < r; ++i)
  {
    for (int j = l + 1; j <= r; ++j)
    {
      if (v[j - 1] > v[j])
      {
        int aux = v[j - 1];
        v[j - 1] = v[j];
        v[j] = aux;
      }
    }
  }

  for (int i = 0; i < 7; ++i)
  {
    printf("%d ", v[i]);
  }
}

int main(void)
{
  int v[] = {5, 10, 3, 7, 8, 9, 1};

  bubble_sort(v, 0, 6);

  return 0;
}
