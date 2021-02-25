//
// Created by caiov on 12/13/2020.
//

#ifndef JOGO_FOGEFOGE_H
#define JOGO_FOGEFOGE_H

#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'
#define PILULA 'P'
#define BOMBA 'b'

int acabou();
void move(char direcao);

int ehdirecao(char direcao);
void fantasmas();
void explodepilula();
void explodepilula2(int x, int y, int somax, int somay, int qtd);

#endif //JOGO_FOGEFOGE_H
