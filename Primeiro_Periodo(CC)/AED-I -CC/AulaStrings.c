#include <stdio.h>
#include <string.h>
#include <locale.h>

main()
{
    char s[11] = "PUC";
    char c = 'A';

    setlocale(LC_ALL,"Portuguese");

    printf("Contando da variavel= %s\n", s); //C:\Program Files (x86)\CodeBlocks\MinGW
    printf("Contando da variavel= %c\n", c);

    printf("Digite uma string com ate 10 caracteres =");
    gets(s);
    printf("String digitada = %s\n\n", s);
    printf("Tamanho da string = %d\n\n", strlen(s));

    s[strlen(s) - 1] = c;

    printf("Nova string = %s\n\n", s);
}
