#include <stdio.h>

float encontraMaiorMenor(float *v, int tam, int *menor);

int main()
{
    int tam, menor, maior;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &tam);

    float v[tam];

    for(int i=0; i < tam; i++)
    {
        printf("Digite os valores desejados:");
        scanf("%f", &v[i]);
    }

    maior = encontraMaiorMenor(v, tam, &menor);

    printf("\n\n>>Maior:%d\n", maior);
    printf(">>Menor:%d\n", menor);

    return 0;
}

float encontraMaiorMenor(float *v, int tam, int *menor)
{
    int maior = v[0];
    *menor = v[0];

    for(int i=1; i<tam; i++)
    {
        if(v[i] > maior)
            maior = v[i];
        if(v[i]< *menor)
            *menor = v[i];
    }

    return maior;
}
