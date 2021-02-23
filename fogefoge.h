//
// Created by caiov on 12/13/2020.
//

#ifndef JOGO_FOGEFOGE_H
#define JOGO_FOGEFOGE_H

#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'

int acabou();
void move(char direcao);

int ehdirecao(char direcao);
void fantasmas();

#endif //JOGO_FOGEFOGE_H
