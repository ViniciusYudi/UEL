// main.c
#include "ListaOrdenada.h"

int main() {
  LISTA lista;
  REGISTRO reg;

  // Inicializar a lista
  inicializarLista(&lista);

  // Exibir lista vazia
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));

  // Inserir elementos na lista
  reg.chave = 9;
  inserirElemListaOrd(&lista, reg);
  reg.chave = 3;
  inserirElemListaOrd(&lista, reg);
  reg.chave = 4;
  inserirElemListaOrd(&lista, reg);
  reg.chave = 1;
  inserirElemListaOrd(&lista, reg);
  reg.chave = 12;
  inserirElemListaOrd(&lista, reg);

  // Exibir lista após inserções
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));

  // Buscar um elemento na lista
  int pos = buscaSequencial(&lista, 4);
  printf("Chave 4 encontrada na posicao: %i do arranjo A.\n", pos);
  
  pos = buscaBinaria(&lista, 4);
  printf("Chave 4 encontrada na posicao: %i do arranjo A.\n", pos);
  
  pos = buscaSentinela(&lista, 4);
  printf("Chave 4 encontrada na posicao: %i do arranjo A.\n", pos);

  // Excluir alguns elementos da lista
  if (excluirElemLista(&lista, 4)) printf("Exclusao bem sucedida: 4.\n");
  if (excluirElemLista(&lista, 8)) printf("Exclusao bem sucedida: 8 (não existe na lista).\n");
  if (excluirElemLista(&lista, 9)) printf("Exclusao bem sucedida: 9.\n");

  // Exibir lista após exclusões
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));

  // Reinicializar a lista
  reinicializarLista(&lista);
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));

  for(int i = 0; i <= 50; i++){
    reg.chave = i;
    inserirElemListaOrdSemDup(&lista, reg);
  }

  printf("Agora, a lista deve ter nroElem = 51, o que ja eh o suficiente para que tenha duplicado.\n");
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));
  printf("O que comprova que a lista duplicou de tamanho ao ter mais que 50 elementos.\n");
  printf("Agora, excluindo elementos para ver se a redução funciona.\n");

  for(int i = 0; i <= 25; i++){
    reg.chave = i;
    excluirElemLista(&lista, i);
  }

  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));
  printf("O que comprova que, ela duplica ao ultrapassar os 50 elementos e retorna para a metade ao ser reduzida até 25 porcento dela.\n");
  reinicializarLista(&lista);

  return 0;
}
