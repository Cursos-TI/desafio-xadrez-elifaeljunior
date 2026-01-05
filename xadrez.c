#include <stdio.h>


void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}


void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    for (int vertical = 0; vertical < 1; vertical++) {
        printf("Cima\n");

        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}


void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}


void moverCavalo() {
    int vertical, horizontal;

    for (vertical = 1; vertical <= 3; vertical++) {

        if (vertical <= 2) {
            printf("Cima\n");
            continue;
        }

        for (horizontal = 1; horizontal <= 2; horizontal++) {
            printf("Direita\n");
            break;
        }
    }
}


int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}