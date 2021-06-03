#include <stdio.h>

int
main ()
{
  int N1, N2, R;
  printf ("escreva um numero\n");
  scanf ("%d", &N1);
  printf ("escreva um segundo numero\n");
  scanf ("%d", &N2);
  R = N1 + N2;
  printf ("A soma entre os numeros %d e %d e %d", N1, N2, R);
  return 0;
}
