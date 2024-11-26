Lista com Redimensionamento Dinâmico

A alteração no código, que antes se baseava em uma alocação estática dos elementos da lista, se consiste em redimensionar para uma estrutura de alocação dinâmica.

Inicialmente, a lista tem uma capacidade de 50 elementos. Ao atingir a capacidade máxima por meio da inserção de mais elementos, ela duplica de tamanho e, ao reduzir para 25% da capacidade, o tamanho da lista é reduzido pela metade.

- Inseri duas novas funções foram inseridas no código: aumentarTamanho e reduzirTamanho.

- Por meio da inserção dessas funções, algumas alterações foram necessárias no código:
    
    - Alteração das funções: inicializarLista, tamanhoEmBytes, reinicializarLista, excluirElemLista, excluirElemListaOrd, inserirElemListaOrd, inserirElemListaOrdSemDup.

    - Todas as citadas anteriormente precisaram de adaptações para que a lista fosse alocada dinamicamente.

- Alterei a struct LISTA, adicionando um inteiro tamanhoLista que conta o tamanho do espaço alocado, diferentemente do inteiro nroElem, que apenas contava os espaços que não eram "lixos" de memória dentro da lista, além de um ponteiro do tipo REGISTRO que foi utilizado para a manipulação da memória.


