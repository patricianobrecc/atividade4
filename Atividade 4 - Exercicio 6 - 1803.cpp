#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char matriz[4][82];

int getcoluna(int colunaindex) {
    char numstring[5];
    int num;

    for (int i = 0; i < 4; ++i) {
        numstring[i] = matriz[i][colunaindex];
    }
    numstring[4] = '\0';

    num = atoi(numstring);

    return num;
}

void readmatriz() {
    int linha;
    memset(matriz, 0, 4 * 82);
    for (linha = 0; linha < 4; ++linha) {
        gets(matriz[linha]);
    }
}

int main() {
    int coluna, colunas, F, L;
    readmatriz();
    
    
    colunas = strlen(matriz[0]);
    
    F = getcoluna(0);
    L = getcoluna(colunas - 1);

    for (coluna = 1; coluna < colunas - 1; ++coluna) {
        int c = (F * getcoluna(coluna) + L) % 257;
        printf("%c", c);
    }

    printf("\n");
    return 0;
}
