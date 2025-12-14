#!/bin/bash

for i in $(seq 1 $2);
do
	echo "Caso de Teste $i:"

	# Testar o programa com a entrada em in.txt e redirecionar sua saida para my.txt
	python3 < ${1}${i}in.txt  > res$i.txt

	# Procurar as diferenças entre a saida redirecionada do programa (my.txt) com a saida esperada do exercicio (out.txt)
	diff -y res$i.txt ${1}${i}out.txt
done
