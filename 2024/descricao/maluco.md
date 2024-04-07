# Problema K

## Maluco

> Nome base: maluco \
> Tempo limite: 1s

O Sr. Beterraba tem um _food truck_ especializado em sanduíches vegetarianos. Mas esse não é o diferencial do negócio. O diferencial é uma surpresa! Você já ouviu falar que um algoritmo é como uma receita?

Funciona assim: o cliente pede o sanduíche informando, em uma certa ordem, os ingredientes desejados. Cada ingrediente possui um número identificador inteiro de 1 a N. O Sr. Beterraba vai empilhando os ingredientes de acordo com a ordem que o cliente pediu. É aí que o Sr. Beterraba começa a preparar o _blend_ utilizando a seguinte receita: o objetivo é ordenar a pilha inicial de ingredientes em uma nova pilha que começa vazia. Essa nova pilha será o sanduíche pronto, com ingredientes devidamente ordenados pelo seu número identificador. A cada movimento, ele só pode pegar o ingrediente do topo ou da base da pilha inicial e colocar no topo ou na base da pilha final. A pilha final deve ser ordenada de maneira crescente do topo até a base.

É sempre possível, para qualquer escolha do cliente, gerar um sanduíche com tal método?

### Entrada

A entrada possui duas linhas. A primeira contém um inteiro N (1 <= N <= 5000). A segunda contém a permutação dos inteiros de 1 a N, correspondendo à pilha inicial de ingredientes na ordem que o cliente os pediu, da base para o topo.

### Saída

Imprima "sim" (sem aspas) indicando se o Sr. Beterraba conseguirá gerar um sanduíche. Caso contrário, imprima "nao" (sem aspas e sem acento).

| Exemplo de Entrada | Exemplo de Saída |
|:-------------------|:-----------------|
| 4                  | sim              |
| 1 2 3 4            |                  |

| Exemplo de Entrada | Exemplo de Saída |
|:-------------------|:-----------------|
| 9                  | nao              |
| 2 4 31 5 9 6 7 8   |                  |
