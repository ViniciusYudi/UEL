// listaSequencialOrdenada.h
#ifndef LISTA_SEQUENCIAL_ORDENADA_H
#define LISTA_SEQUENCIAL_ORDENADA_H

#include <stdlib.h>
#define ERRO -1
#define bool int
#define true 1
#define false 0

typedef int TIPOCHAVE;

typedef struct {
  TIPOCHAVE chave;
  // outros campos...
} REGISTRO; // <- nome da estrutura.

// Em C++, seria algo assim:
// struct REGISTRO{
//    TIPOCHAVE chave;
// }

typedef struct { // A é um ponteiro para apontar para um bloco de memória alocado dinamicamente.
  REGISTRO *A;
  int nroElem; // nroElem vai contar quantos valores foram INSERIDOS na lista até o momento, já que podem ter espaços não utilizados em relação ao tamanho total.
  int tamanhoLista; // tamanhoLista vai contar o tamanho MÁXIMO da lista.
} LISTA;

// Em C++, seria algo assim:
// struct LISTA{
//    REGISTRO A[MAX + 1]; <- onde MAX é definido como 50.
//    int nroElem;
// }

// Declaração das funções
void inicializarLista(LISTA* l);
void exibirLista(LISTA* l);
int tamanho(LISTA* l);
int tamanhoEmBytes(LISTA* l);
TIPOCHAVE primeiroElem(LISTA* l);
TIPOCHAVE ultimoElem(LISTA* l);
TIPOCHAVE enesimoElem(LISTA* l, int n);
void reinicializarLista(LISTA* l);
int buscaSequencial(LISTA* l, TIPOCHAVE ch);
int buscaSentinela(LISTA* l, TIPOCHAVE ch);
int buscaSentinelaOrdenada(LISTA* l, TIPOCHAVE ch);
int buscaBinaria(LISTA* l, TIPOCHAVE ch);
bool excluirElemLista(LISTA* l, TIPOCHAVE ch);
bool excluirElemListaOrd(LISTA* l, TIPOCHAVE ch);
bool inserirElemListaOrd(LISTA* l, REGISTRO reg);
bool inserirElemListaOrdSemDup(LISTA* l, REGISTRO reg);
void aumentarTamanho(LISTA* l);
void reduzirTamanho(LISTA * l);

#endif // LISTA_SEQUENCIAL_ORDENADA_H