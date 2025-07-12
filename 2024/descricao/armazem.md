# Problema A

## Rastreamento de Itens do Armazém

> Nome base: armazem \
> Tempo limite: 1s

Imagine que você é o gerente de um grande armazém de produtos e todos os produtos no armazém são identificados por um código único, que serve para diferenciar uns dos outros. Ao longo do tempo, várias operações ocorrem no armazém, como a adição de novos produtos, a remoção de produtos existentes ou mesmo a movimentação dos produtos para diferentes locais dentro do armazém.

Essas operaçãoes são registradas em uma lista de tuplas, onde cada tupla representa uma operação realizada no armazém. Cada tupla contém três informações:

- O código único do produto (item).
- A ação realizada, que pode ser 'adicionar' ou 'remover'.
- O local para onde o produto foi adicionado ou do qual foi removido (local).

Por exemplo, uma entrada na lista de operações pode ser (A001 adicionar prateleira1), indicando que o produto com código "A001" foi adicionado à "prateleira1".

A sua tarefa é desenvolver um programa que processe a lista de operações e determine o local final de cada produto após todas as operações serem realizadas.

### Entrada

A entrada é composta por diversas linhas, cada linha terá três strings, C, A e L, separadas por um espaço em branco. A primeira string representa o Código do item, a segunda representa a Ação e a terceira o Local. As strings C e A possuem T1 caracteres (1 <= T1 <= 10). A string L possui T2 caracteres (1 <= T2 <= 10^3). A entrada é encerrada quando receber o código 0.

### Saída

A saída deverá conter uma linha contendo o local final de cada produto após todas as operações serem aplicadas. Os produtos devem ser impressos na ordem de leitura e caso o produto não estiver mais no armazém, deverá ser impresso "nao encontrado".

| Exemplo de Entrada         | Exemplo de Saída    |
|:---------------------------|:--------------------|
| A001 adicionar prateleira1 | A001 nao encontrado |
| B002 adicionar prateleira2 | B002 nao encontrado |
| A001 remover prateleira1   | C003 nao encontrado |
| C003 adicionar prateleira3 | D004 prateleira4    |
| B002 remover prateleira2   |                     |
| C003 remover prateleira3   |                     |
| D004 adicionar prateleira4 |                     |
| 0                          |                     |
