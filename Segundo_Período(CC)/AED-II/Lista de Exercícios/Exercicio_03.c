#include <stdio.h>

void imprimeM(int linha, int coluna, int m[][coluna]);
void calculaDiagonal(int tam, int m[][tam], int *soma);

int main()
{
    int m[3][3] = {2,3,4,
                   5,1,2,
                   6,4,5};
    int result;

    printf("Matriz original: \n");
    imprimeM(3, 3, m);
    calculaDiagonal(3, m, &result);

}

void imprimeM(int linha, int coluna, int m[][coluna])
{
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
    printf("\n");
}

void calculaDiagonal(int tam, int m[][tam], int *soma)
{
    *soma = 0;
    int linha;
    for(int i = 0; i < linha; i++)
        for(int j = 0; j < tam; j++)
        {
            if(i == j)
                *soma = m[i][j] + *soma;
        }
    printf("Resultado soma da diagonal principal: %d", *soma);
}
