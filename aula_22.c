#include <stdio.h>

int main(void)
{
  float notas[10];
  
  for(int i=0;i<5;i++)
    {
      notas[i]=i*5;
      printf("%f\n",notas[i]);
    }
  
  return 0;
}
