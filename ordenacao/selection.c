#include <stdio.h>
#include <stdlib.h>

void selection_sort(int *v, int l, int r)
{
  for (int i = l; i < r; ++i)
  {
    int min = i;

    for (int j = i + 1; j <= r; ++j)
    {
      if (v[j] < v[min])
      {
        min = j;
      }
    }
    int tmp = v[i];
    v[i] = v[min];
    v[min] = tmp;
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

  selection_sort(v, 0, 6);

  return 0;
}