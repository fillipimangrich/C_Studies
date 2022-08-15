#include <stdio.h>

int main()
{
  int fatorial=1;
  int contador;
  int n;
  scanf("%d", &n);
  for (contador = n; contador > 1; contador--)
  {
      fatorial *= contador;
    }
  printf("o fatorial de %d e %d\n",n, fatorial);
  return 0;
}
