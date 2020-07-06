#include<stdio.h>
int
main ()
{
  int a[40], b[40], size = 0, arr[size], i, c[40];
  printf ("enter the size of array\n");
  scanf ("%d", &size);
  printf ("enter the value of array 1\n");
  for (i = 0; i < size; i++)
    {
      scanf ("%d", &a[i]);
    }
  printf ("enter the value of array 2\n");
  for (i = 0; i < size; i++)
    {
      scanf ("%d", &b[i]);
    }
  for (i = 0; i < size; i++)
    {
      c[i] = a[i];
      a[i] = b[i];
      b[i] = c[i];
    }
  printf ("first array is\n");
  for (i = 0; i < size; i++)
    {

      printf ("%d\n", a[i]);
    }
  printf ("second array is\n");
  for (i = 0; i < size; i++)
    {

      printf (" %d\n", b[i]);
    }
}
