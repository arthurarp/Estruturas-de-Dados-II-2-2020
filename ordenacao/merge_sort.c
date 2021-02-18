#include <stdio.h>
#include <stdlib.h>

int *intercala(int *a, int la, int ra, int *b, int lb, int rb)
{
  int ta = (ra - la + 1);
  int tb = (rb - lb + 1);

  int *c = malloc(sizeof(int) * (ta + tb));
  int lc = 0;
  int rc = (ta + tb - 1);

  int ia = la;
  int ib = lb;
  int ic = 0;

  while (ia <= ra && ib <= rb)
  {
    if (a[ia] <= b[ib])
    {
      c[ic++] = a[ia++];
    }
    else
    {
      c[ic++] = b[ib++];
    }
  }

  while (ia <= ra)
    c[ic++] = a[ia++];

  while (ib <= rb)
    c[ic++] = b[ib++];

  return c;
}

void merge_sort(int *v, int l, int r)
{
  if (l >= r)
    return;

  int meio = (l + r) / 2;
  merge_sort(v, l, meio);
  merge_sort(v, meio + 1, r);

  int *c = intercala(v, l, meio, v, meio + 1, r);
  int aux = r - l + 1;
  for (int i = 0; i < aux; ++i)
  {
    v[l++] = c[i];
  }
  free(c);
}

int main(void)
{
  // int v[] = {5, 10, 3, 7, 8, 9, 1};
  int v[] = {50, 30, 80, 20, 0};

  for (int i = 0; i < 5; ++i)
    printf("%d ", v[i]);
  printf("\n");

  merge_sort(v, 0, 4);

  for (int i = 0; i < 5; ++i)
    printf("%d ", v[i]);
  printf("\n");

  return 0;
}
