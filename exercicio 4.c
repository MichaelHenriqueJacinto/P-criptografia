#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        char arquivo[20];
        int i;

        printf("Digite o nome do Arquivo: ");
        scanf("%s", arquivo);

        for( i = 0; i < strlen(arquivo); i++ )
        {
                arquivo[i] += 3;
        }

        printf(">> Arquivo Gerado: %s\n\n ", arquivo);

        return 0;
}

