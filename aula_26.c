#include <stdio.h>

int main(void)
{
  int matriz[5][5] = {0};

  for (int i = 0; i<5; i++){
    for (int j = 0; j<5;j++){
      printf("Elemento (%i,%i)\n",i,j);
    }
  }

  return 0;
}
