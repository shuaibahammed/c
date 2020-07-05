
#include <stdio.h>

int
main ()
{
  int pri;
  float inte, no, SI;
  printf ("enter the principal amount");
  scanf ("%d", &pri);
  printf ("enter the interest rate");
  scanf ("%f", &inte);
  printf ("enter the no.of years");
  scanf ("%f", &no);

  SI = ((pri * inte * no) / 100);

  printf ("simple interst is %f", SI);
}
