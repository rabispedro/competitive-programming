# Problema G

## Laboratórios da Maratona de Programação

> Nome base: laboratorios \
> Tempo limite: 1s

Um estudante está participando de uma maratona de programação e precisa saber em qual laboratório deve ficar com base em seu número de inscrição.

Cada laboratório tem capacidade para alocar um certo intervalo de incrições. Então, para ajudar a equipe de organização, escreva um programa que verifique o número de inscrição do estudante e determine em qual laboratório ele deve se dirigir.

- Laboratório 1: Inscrições de 1 a 35.
- Laboratório 2: Inscrições de 36 a 70.
- Laboratório 3: Inscrições de 71 a 105.
- Laboratório 4: Inscrições de 106 a 150.

### Entrada

A entrada consiste de um número inteiro N representando o número de inscrição do estudante (1 <= N <= 150).

### Saída

A saída mostrará o número do laboratório para o qual o estudante deve se dirigir, se o número de inscrição estiver dentro do intervalo de algum laboratório. Caso contrário, a saída mostrará a palavra "erro".

| Exemplo de Entrada | Exemplo de Saída |
|:-------------------|:-----------------|
| 75                 | 3                |

| Exemplo de Entrada | Exemplo de Saída |
|:-------------------|:-----------------|
| 1500               | erro             |

| Exemplo de Entrada | Exemplo de Saída |
|:-------------------|:-----------------|
| 150                | 4                |
