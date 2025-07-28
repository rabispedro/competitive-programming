# Problema F

## Biblioteca Municipal

> Nome base: municipal \
> Tempo limite: 1s

A biblioteca municipal está reorganizando seu acervo de livros e deseja criar uma seção especial que destaque uma sequência de livros cujos anos de publicação formem a maior sequência crescente possível.

Para isso, eles precisam de um programa que, dada uma lista dos anos de publicação de todos os livros disponíveis, determine qual é a maior sequência crescente de anos.

Importante: livros publicados no mesmo ano devem ser considerados apenas uma vez na sequência.

### Entrada

A primeira linha contém um inteiro N (1 <= N <= 1000) representando o número de livros na biblioteca. A segunda linha contém M (1 <= M <= 10000) inteiros separados por espaço, representando os anos de publicação dos livros.

### Saída

Um inteiro representando o comprimento da maior sequência crescente de anos de publicação.

| Exemplo de Entrada                      | Exemplo de Saída |
|:----------------------------------------|:-----------------|
| 8                                       | 6                |
| 1980 1990 1985 2000 1985 1995 2002 1990 |                  |
