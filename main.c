#include <stdio.h>
#include <stdlib.h>

int main() {
    //matriz de 5x10
    char mapa[5][10+1];

    //abertura do arquivo
    FILE* f;
    f = fopen("C://Users//caiov//Google Drive//Cursos//Alura//Linguagem-C//C-3-Recursos-avancados-da-linguagem//jogo//mapa.txt.txt","r");
    if (f == 0){
        printf("Erro na abertura do arquivo mapa");
        exit(1);
    }

    //leitura de cada linha do arquivo
    for (int i = 0; i < 5; ++i) {
        fscanf(f,"%s", mapa[i]);
    }

    //printar cada linha do arquivo na tela
    for (int i = 0; i < 5; ++i) {
        printf("%s\n",mapa[i]);
    }

    fclose(f);

    return 0;
}
