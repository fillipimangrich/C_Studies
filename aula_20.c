#include <stdio.h>
#include <stdbool.h>
int main()
{
  char vchar = 'a';
  printf("%c\n",vchar);
  scanf("%c\n",&vchar);

  bool vbool = true;
  printf("%i\n",vbool);

  int vint = 32;//32 bits
  const int vconstint = 32;
  long int vlongint = 64;//64bits
  scanf("%i\n",&vlongint);
  printf("%i\n",vlongint);
  
  float vfloat = 32;
  double vdouble = 64;
  printf("%f\n", vfloat);
  scanf("%lf",&vdouble);




  return 0;
}
