#include <stdio.h>


int main()
{
  int idade;

  printf("Informe sua idade: \n");
  scanf("%d", &idade);

  if (idade <18)
  {
    printf("Bebidas nao estao liberadas\n");
  } else
  {
    printf("Bebidas estao liberadas\n");
  }


  return 0;
}
