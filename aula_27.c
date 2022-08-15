#include <stdio.h>

int main()
{
  float alunos[4][4] = {0};
  float medias[4] = {0};
    for (int i = 0; i<4;i++)
    {
      printf("Digite as notas do aluno %i: \n",i);
      scanf("%f %f %f %f",&alunos[i][0],&alunos[i][1],&alunos[i][2],&alunos[i][3]);
      for (int j =0; j<4;j++){
        medias[i] += alunos[i][j];
      }
      medias[i] /= 4;
    }
    for (int i = 0; i<4;i++)
    {
      printf("A media do aluno %i e: %.2f\n",i,medias[i]);
    }


  return 0;
}
