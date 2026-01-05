#include <stdio.h>

int main() {


    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");


    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");


    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do Cavalo:\n");
    
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");

     
        if (i == casasBaixo) {
            int contadorHorizontal = 1;
            while (contadorHorizontal <= casasEsquerda) {
                printf("Esquerda\n");
                contadorHorizontal++;
            }
        }
    }

    return 0;
}