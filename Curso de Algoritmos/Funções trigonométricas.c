#include <stdio.h>
#include <conio.h>
#include <math.h>

int
main ()
{
  double x, seno, cosseno, tangente;

  printf ("informe um angulo...\n");
  scanf ("%lf", &x);
  
  seno = sin (x);
  printf ("Valor de seno de %.2lf = %.2lf \n", x, seno);

  cosseno = cos (x);
  printf ("Valor do coseno de %.2lf = %.2lf \n", x, cosseno);

  tangente = tan (x);
  printf ("Valor da tangente de %.2lf = %.2lf \n", x, tangente);
  return 0;
}
