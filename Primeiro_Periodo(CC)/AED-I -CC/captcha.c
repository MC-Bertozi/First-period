#include <stdio.h>
#include <stdlib.h>

main()
{
    char captcha[10], c;
    int n, i;

    printf("Gerando um Captcha com 9 caracteres Aleatorios\n");
    printf("===============================================\n\n");

    srand(time(NULL));
    n = rand() %26;
    printf("Numero aleatorio gerado = %d\n", n);
    c = (char) (65 + n);
    printf("Caractere maiusculo gerado = %c\n\n", c);

    srand(time(NULL));
    n = rand() %26;
    printf("Numero aleatorio gerado = %d\n", n);
    c = (char) (97 + n);
    printf("Caractere minusculo gerado = %c\n", c);

}
