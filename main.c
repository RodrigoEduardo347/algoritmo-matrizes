#include <stdio.h>

#define M 'm'
#define N 'n'
#define P 'p'
#define A 'A'
#define B 'B'

int leValores(char aux_nome, int paramenter)
{
    printf("\nMe informa o valor do parametro %c: ", aux_nome);
    scanf("%i", &paramenter);
    return paramenter;
}

void validavalores(char aux_nome, int paramenter)
{
    if (paramenter < -10)
    {
        printf("\nERRO! O parametro %c eh menor que -10\n", aux_nome);
        exit(0);
    }
    else if (paramenter > 10)
    {
        printf("\nERRO! O parametro %c eh maior que 10\n", aux_nome);
        exit(0);
    }
}

float lematrizes(char nomeVar, int linha, int coluna, float matriz[linha][coluna])
{
    printf("\n\n\n");
    printf("Preencha os valores da matriz %c:\n", nomeVar);
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("\nValor na linha %d e coluna %d: ", i + 1, j + 1);
            scanf(" %f", &matriz[i][j]);
        }
    }
    return matriz[linha][coluna];
}

void imprimeMatriz(char nome, int linha, int coluna, float matriz[linha][coluna])
{
    printf("\n\n\n\n");
    printf("Matriz %c:\n\n", nome);
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("| %0.2f | ", matriz[i][j]);
            if (j == (coluna - 1))
            {
                printf("\n");
            }
        }
    }
}

int main()
{
    int m = 0, n = 0, p = 0;

    m = leValores(M, m);
    validavalores(M, m);
    n = leValores(N, n);
    validavalores(N, n);
    p = leValores(P, p);
    validavalores(P, p);

    float matrizA[m][n];
    matrizA[m][n] = lematrizes(A, m, n, matrizA);
    imprimeMatriz(A, m, n, matrizA);

    float matrizB[n][p];
    matrizB[n][p] = lematrizes('B', n, p, matrizB);
    imprimeMatriz(B, n, p, matrizB);

    return 0;
}