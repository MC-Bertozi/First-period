#include <stdio.h>
#include <strings.h>

typedef struct pessoa
{
    char nome[50];
    int idade;
} Gente;

void registraPessoa(Gente *p);
void imprimePessoas(Gente *v, int tam);

int main()
{
  Gente p1[3];

  registraPessoa(&p1[0]);
  registraPessoa(&p1[1]);
  registraPessoa(&p1[2]);
}

void registraPessoa(Gente *p)
{
    printf("Nome:");
    scanf("%c", p->nome);
    printf("Idade:\n");
    scanf("%d", p->idade);
}
