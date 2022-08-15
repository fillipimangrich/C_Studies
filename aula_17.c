#include <stdio.h>

int main()
{
  int n1;
  int n2;
  
  printf("Digite dois numeros inteiros: \n");
  scanf("%d %d", &n1, &n2);

  if (n2 == 0)
    printf("Inderteminacao\n");
  else if(n1%n2 == 0)
    printf("%d e divisivel por %d\n",n1,n2);
  else
    printf("%d nao e divisil por %n2 \n",n1,n2);


  return 0;
}
