#include <stdio.h>


int main ()
{
  int n;

  printf("Insira um numero inteiro de 1 a 5: \n");
  scanf("%d", &n);

  switch(n) 
    {
      case 1:
        printf("primeiro\n");
        break;
      case 2:
        printf("Segundo\n");
        break;
      case 3:
        printf("Terceiro\n");
      case 4:
        printf("Quarto\n");
        break;
      case 5:
        printf("Quinto\n");
        break;
      default:
        printf("Opcao nao valida!\n");
    }

  return 0;
}
