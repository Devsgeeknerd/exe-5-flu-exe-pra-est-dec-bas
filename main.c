#include <stdio.h>
#include <stdlib.h>

void main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16 && idade < 18 || idade > 60)
    {
        printf("O voto é opcional");
    }
    else if (idade < 16)
    {
        printf("Você não pode votar");
    }
    else
    {
        printf("O voto é obrigatório");
    }
    return 0;
}
