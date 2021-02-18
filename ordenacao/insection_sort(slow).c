#include <stdio.h>
#include <stdlib.h>

void insertion_sort_slow(int *v, int l, int r)
{
  for (int i = l + 1; i <= r; ++i)
  {
    for (int j = i + 1; j > l; --j)
    {
      if (v[j - 1] > v[j])
      {
        int tmp = v[j - 1];
        v[j - 1] = v[j];
        v[j] = tmp;
      }
    }
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

  insertion_sort_slow(v, 0, 6);

  return 0;
}