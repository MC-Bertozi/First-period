#include <stdio.h>
#include <string.h>

typedef struct pessoa
{
    char nome[50];
    int idade;
} Gente;

void cadastraPessoa(Gente *p);
Gente maisVelho(Gente *p, int tam);

int main()
{
    Gente p1[3];
    Gente VelhaPlusPlus;

    for(int i=0; i<3; i++)
        cadastraPessoa(&p1[i]);

    VelhaPlusPlus = maisVelho(p1, 3);

    printf("\n>>%s eh a pessoa mais velha com %d anos de idade.\n\n", VelhaPlusPlus.nome, VelhaPlusPlus.idade);

    return 0;
}

void cadastraPessoa(Gente *p)
{
    printf("Nome:");
    scanf("%s", &p->nome);

    printf("Idade:");
    scanf("%d", &p->idade);

    printf("\n");
}

Gente maisVelho(Gente *p, int tam)
{
    Gente VelhaPlus = p[0];
    for(int i = 1; i < tam; i++)
    {
        if(p[i].idade > VelhaPlus.idade)
            VelhaPlus = p[i];
    }

    return VelhaPlus;
}
