#include <stdio.h>

int main()
{
  int idade;
  printf("Informe sua idade\n");
  scanf("%d",&idade);

  if (idade <= 5)
    printf("bebe \n");
  else if (idade >5 && idade <=10)
      printf("Crianca\n");
  else if (idade >10 && idade <= 18)
      printf("Adolescente\n");
  else
      printf("Adulto\n");


  return 0;
}
