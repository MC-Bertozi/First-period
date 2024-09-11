#include <stdio.h>

void imprimeVetor(int v[], int tam);
void modificaVetor(int *v, int tam);

int main()
{
    int v[10]= {1,30,5,9,2,6,4,3,12,7};

    imprimeVetor(v, 10);
    modificaVetor(v, 10);

    return 0;
}

void imprimeVetor(int v[], int tam)
{
    printf("Vetor normal: [");
    for(int i = 0; i < tam; i++)
        printf("%d ", v[i]);
    printf("]\n");
}

void modificaVetor(int *v, int tam)
{
    printf("Vetor modificado: [");
    for(int i = 0; i < tam; i++)
    {
        if(v[i] % 3==0)
            v[i] = 0;
        printf("%d ", v[i]);
    }
    printf("]\n");
}
