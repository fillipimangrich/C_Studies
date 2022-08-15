#include <stdio.h>

int main()
{
    int idade1 = 20;
    int idade2 = 37;
    int idade3 = 59;

    int idadeTotal;

    idadeTotal = idade1+idade2*idade3/idade1;

    printf("%i\n", idadeTotal);

    return 0;
}