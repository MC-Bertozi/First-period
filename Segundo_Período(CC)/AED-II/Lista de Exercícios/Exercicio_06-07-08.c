#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cachorro //Exercicio 6
{
    char nome[50];
    char raca[50];
    int idade;
    float peso;
} Cao;

void registraCao(Cao *v);
void contaIdadesIguais(Cao *v, int tam);
void caoMaisNovo(Cao *v, int tam);

int main()
{
    Cao v[5];

    printf("Pet Shop do Carlao, pague em dobro e registre seu cao!!\n");
    printf("=======================================================\n\n");

    for(int i=0; i<5; i++)
    {
        registraCao(&v[i]);
    }

    contaIdadesIguais(v, 5);
    caoMaisNovo(v,5);
}

void registraCao(Cao *v)
{
    printf("Nome:");
    scanf("%s", &v->nome);

    printf("Raca:");
    scanf("%s", &v->raca);

    printf("Peso:");
    scanf("%f", &v->peso);

    printf("Idade:");
    scanf("%d", &v->idade);

    printf("\n\n");
}

void contaIdadesIguais(Cao *v, int tam)  //Exercicio 7
{
    Cao novo = v[0];
    int conta = 0;
    for(int i=0; i<tam; i++)
    {
        if(v[i].idade == novo.idade)
        {
            printf(">>Os caes %s e %s tem a mesma idade (%d anos)!\n", v[i].nome, novo.nome, v[i].idade);
            conta++;
        }
    }

    printf("\n\n>>O petshop tem %d de caes com a mesma idade.", conta);
}

void caoMaisNovo(Cao *v, int tam) //Exercicio 8
{
    Cao novo = v[0];
    for(int i = 1; i < tam; i++)
    {
        if(v[i].idade < novo.idade)
            novo = v[i];
    }

    printf("\n>>O cao mais novo do Pet Shop eh %s com %d de idade!!\n\n", novo.nome, novo.idade);
}
