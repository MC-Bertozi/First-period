#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>

typedef struct McQueen
{
    char marca[50];
    char modelo[50];
    int ano;
    float kmRodado;
} Carro;

void registraCarro(Carro *p, char *marca, char *modelo, int ano);
void imprimeCarros(Carro *p, int num_carros);
Carro corridaAleatoria(Carro *p, int num_carros);

int main()
{
    Carro v[12];
    Carro result;

    registraCarro(&v[0], "Relampago Mcqueen", "Corvette C6", 2006);
    registraCarro(&v[1], "Tom Mate", "caminhao reboque", 2011);
    registraCarro(&v[2], "Sally Carrera", "Porsche Novecentos e Onze Carrera", 2017);
    registraCarro(&v[3], "Strip Weathers", "Plymouth Superbird", 2006);
    registraCarro(&v[4], "Doc Hudson", "Hudson Hornet", 2011);
    registraCarro(&v[5], "Mack", "caminhao Mack Super Liner", 2017);
    registraCarro(&v[6], "Chick Hicks", "Buick Regal", 2006);
    registraCarro(&v[7], "Ramona", "Impala", 2011);
    registraCarro(&v[8], "Flo", "Ford Thunderbird", 2017);
    registraCarro(&v[9], "Fillmore", "Kombi", 2006);
    registraCarro(&v[10], "Xerife", "Mercury Eight cupe", 2011);
    registraCarro(&v[11], "Luigi", "Fiat Quinhentos", 2017);

    imprimeCarros(v, 12);

    corridaAleatoria(v, 12);

    return 1;
}

void registraCarro(Carro *p, char *marca, char *modelo, int ano)
{
    strcpy(p->marca, marca);
    strcpy(p->modelo, modelo);
    p->ano = ano;
}

void imprimeCarros(Carro *p, int num_carros)
{

    for(int i = 0; i < num_carros; i++)
        printf("Marca: %s\nModelo: %s\nAno: %d\n\n", p[i].marca, p[i].modelo, p[i].ano);

}

Carro corridaAleatoria(Carro *p, int num_carros)
{
    srand(time(NULL));


    Carro winner = p[0];;

    for(int i = 0; i < num_carros; i++)
    {
        p[i].kmRodado = rand()%100;

        if(p[i].kmRodado > winner.kmRodado)
        {
            winner.kmRodado = p[i].kmRodado;
            winner = p[i];

        }
    }

    printf("\n>>O carro vencedor eh %s com %3.2f kmRodados!!\n\n", winner.marca, winner.kmRodado);


    return winner;
}
