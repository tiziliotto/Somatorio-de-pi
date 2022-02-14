/*Programa calcula a media harmonica de n valores inseridos e imprime o resultado excetuando os valores maior e menor*/

#include <stdio.h>
#include <string.h>
#define TAMMAX 30

int main ()
{
    int i = 0;
    int tamanho;
    double divisor;
    double harmonica;
    double vetor[TAMMAX];
    double maior = 0;
    double menor = 1000;

    do
    {
        printf("Insira a quantidade de numeros a serem inseridos (entre 1 e 30): ");
        scanf("%d", &tamanho);
    }
    while (tamanho < 1 || tamanho > 30);


    for (i = 0; i < tamanho; i++)
    {
        printf("Insira os valores: ");
        scanf("%lf", &vetor[i]);
    }

    for(i = 0; i < tamanho; i++)
    {
        if(vetor[i] >= maior){
            maior = vetor[i];
        }
        if (vetor[i] <= menor){
            menor = vetor[i];
        }

        divisor = divisor + (1/vetor[i]);
    }

    divisor = divisor - (1/maior) - (1/menor);

    printf("\nO menor valor e: %.4lf \n", menor);
    printf("\nO maior valor e: %.4lf \n", maior);
    harmonica = (tamanho - 2)/divisor;
    printf("\nA media harmonica e %.4lf\n", harmonica);

    return 0;
}
