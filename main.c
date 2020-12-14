#include <stdio.h>
#include <stdlib.h>
#include "fogefoge.h"

char **mapa;
int linhas;
int colunas;

int main() {

    lemapa();
    liberamapa();

    return 0;
}

void lemapa(){
    //abertura do arquivo
    FILE* f;
    f = fopen("C://Users//caiov//Google Drive//Cursos//Alura//Linguagem-C//C-3-Recursos-avancados-da-linguagem//jogo//mapa.txt.txt","r");
    if (f == 0){
        printf("Erro na abertura do arquivo mapa");
        exit(1);
    }

    fscanf(f, "%d %d", &linhas, &colunas);
    alocamapa();

    //leitura de cada linha do arquivo
    for (int i = 0; i < 5; ++i) {
        fscanf(f,"%s", mapa[i]);
    }

    //printar cada linha do arquivo na tela
    for (int i = 0; i < 5; ++i) {
        printf("%s\n",mapa[i]);
    }

    fclose(f);
}

void alocamapa(){
    mapa = malloc(sizeof(char*) * linhas);

    for (int i = 0; i < linhas; ++i) {
        mapa[i] = malloc(sizeof(char) * colunas);
    }
}

void liberamapa(){
    for (int i = 0; i < linhas ; ++i) {
        free(mapa[i]);
    }
    free(mapa);
}
