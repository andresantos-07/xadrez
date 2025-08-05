#include <stdio.h>

// Mover (Bispo cinco casas para frente e direita)
void moveBispo(int casasBispo)
{
    if (casasBispo > 0)
    {
        printf("Frente, Direita\n");

        moveBispo(casasBispo - 1);
    }
}

// Mover Rainha (oito casas para esquerda)
void moveRainha(int casasRainha)
{
    if (casasRainha > 0)
    {
        printf("Esquerda\n");

        moveRainha(casasRainha - 1);
    }
}

// Mover Torre (cinco casas para frente)
void moverTorre(int casasTorre)
{
    if (casasTorre > 0)
    {
        printf("Frente\n");

        moverTorre(casasTorre - 1);
    }
}

int main()
{
    int moveCavalo = 1;

    // Chamada dos movimentos do Bispo
    printf("\n");
    printf("*** Movimento do Bispo ***\n");
    moveBispo(5);

    // Chamada dos movimentos da Rainha
    printf("\n");
    printf("*** Movimento da Rainha ***\n");
    moveRainha(8);

    // Chamada dos movimentos da Torre
    printf("\n");
    printf("*** Movimento da Torre ***\n");
    moverTorre(5);

    // Movimento do Cavalo (duas casas para cima e uma para direita)
    printf("\n");
    printf("** Movemento do cavalo **\n");

    while (moveCavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Frente\n");
        }
        printf("Direita\n");
    }

    return 0;
}