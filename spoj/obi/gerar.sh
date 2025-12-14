#!/bin/bash

# Letra 'a' na tabela ASCII
cod_letra=97

for i in $(seq 1 $1);
do
	# Casting de int para char
	letra=$(printf "\\$(printf '%03o' "$cod_letra")")
	
	cp template.cpp ${letra}.cpp
	
	for j in $(seq 1 $2);
	do
		touch ${letra}${j}i.txt
		touch ${letra}${j}o.txt
	done
	((cod_letra++))
done
