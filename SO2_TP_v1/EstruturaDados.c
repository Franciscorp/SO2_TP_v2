#define _UNICODE//tem haver com outras bibliotecas que vao buscar esta
#define UNICODE//por as duas pelo sim pelo nao
#include <time.h>
#include <windows.h>
#include <tchar.h>
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
//#define _CRT_SECURE_NO_WARNINGS

<<<<<<< HEAD
//teste FRP
=======

//MINHA ALTERA�AO
>>>>>>> Macgab
<<<<<<< HEAD
=======






//ISTO e PARA O MASTER XICO




>>>>>>> master

typedef struct {
	int posX;//canto superior esquerdo do qual come�a a posicao
	int posY;
	int larg;//largura
	int alt;//altura
}tamanhoPosicao;

typedef struct {
	int IDNave;
	int speed;//tera varias categorias de velocidade
	int resistencia;//resistencia da nave????? sera?
	int vida;//vida da nave
	int numBombas;//numero de bombas que a nave tem
	int pontos;//quantos pontos tem este jogador
	HANDLE *threadID;//duvidas aqui, nao sei se os jogadores sao com handles
	tamanhoPosicao tamPosNave;


}navesDefensoras;

typedef struct {
	int IDNave;
	int speed;//tera varias categorias de velocidade
	int movimento;//tera varias categorias de movimento
	int vida;//vida/resistencia da nave
	int numBombas;//numero de bombas que a nave tem
	HANDLE *threadID;
	tamanhoPosicao tamPosNave;


}navesInvasoras;

typedef struct {
	int IDPowerup;//identifica qual � o powerup
	int IDTipo;//identifica o tipo do powerup
	int speed;//nao sei se e preciso aqui
	HANDLE *threadPW;//threadsPowerups
	tamanhoPosicao tamPosPowerup;


}powerup;


typedef struct {
	int dimX;//dimensao em x
	int dimY;//dimensao em y
	int nivel;//talvez va funcionar como factor de multiplicacao para os elementos abaixo
	int nNavesInvasoras;
	int speed;//numero de naves com este tipo talvez? ou porcoes
	int tipoComportamento;//numero de naves com este tipo talvez? ou porcoes
	int frequenciaDisparo;
	int numVidasJog;//numero de vidas para cada jogador?


}jogo;

typedef struct {



}tiros;

typedef struct {



}bombas;

//threads para o jogo
//threads para cada jogador
//threads tiros
//threads bombas
//thread geracaoPowerup e movimentoPowerup?
//threads navesInvasoras talvez baseada em cada tipo?

//variaveis globais

