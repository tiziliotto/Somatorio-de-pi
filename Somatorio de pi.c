#include <stdio.h>
#include <math.h>

/*Programa aproxima o valor de pi*/
int main ()
{
    double inicializacao;
    double x;
    double pi = 0;

    printf("Por favor insira um valor valido para inicializacao: ");
    scanf("%lf", &inicializacao);
    while(inicializacao <= 0)
    {
        printf("Por favor insira um valor valido para inicializacao: ");
        scanf("%lf", &inicializacao);
    }
    for (x = 1; x <= inicializacao; x++)
    {
        pi = pi + (pow(-1,(x + 1)))/(x*x);
    }
    pi = 12*pi;
    pi = sqrt(pi);
    printf("O valor aproximado de pi e: %lf\n", pi);






    return 0;
}
