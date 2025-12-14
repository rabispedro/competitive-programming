#!/bin/bash

# Compilar o programa
g++ -lm -pipe -O2 -Wall -std=c++20 -g $1.cpp -o Main

for i in $(seq 1 $2);
do
	echo "Caso de Teste $i:"

	# Testar o programa com a entrada em in.txt e redirecionar sua saida para my.txt
	./Main < ${1}${i}in.txt  > res$i.txt

	# Procurar as diferenças entre a saida redirecionada do programa (my.txt) com a saida esperada do exercicio (out.txt)
	diff -y res$i.txt ${1}${i}out.txt
done
