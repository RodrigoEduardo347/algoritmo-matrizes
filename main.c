#include <stdio.h>

#define M 'm'
#define N 'n'
#define P 'p'

int leValores(char aux_nome, int paramenter)
{
    printf("\nMe informa o valor do parametro %c: ", aux_nome);
    scanf("%i",&paramenter);
    return paramenter;
}

void validavalores(char aux_nome, int paramenter)
{
    if(paramenter < -10)
    {
        printf("\nERRO! O parametro %c eh menor que -10\n", aux_nome);
        exit(0);
    }
    else if(paramenter > 10)
    {
        printf("\nERRO! O parametro %c eh maior que 10\n", aux_nome);
        exit(0);
    }
}

int main()
{
    int m=0, n=0, p=0;

    m = leValores(M, m);
    validavalores(M, m);
    n = leValores(N, n);
    validavalores(N, n);
    p = leValores(P, p);
    validavalores(P, p);

    return 0;
}