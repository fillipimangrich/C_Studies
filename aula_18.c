#include <stdio.h>

int main()
{
  int n;
  int n2;

  printf("Digite um numero inteiro: \n");
  scanf("%i", &n);

  for (n; n>0;n /= 10){
    n2 = n%10;
    printf("%i",n2);
  }

  printf("\n");


  return 0;
}
