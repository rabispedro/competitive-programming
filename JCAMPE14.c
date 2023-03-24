#include<stdio.h>
#include<stdlib.h>

int cormengoVitorias, cormengoEmpates, cormengoSaldo, cormengoPontos;
int flaminthiansVitorias, flaminthiansEmpates, flaminthiansSaldo, flaminthiansPontos;
char classificacao = '=';

int main () {
	scanf("%d %d %d %d %d %d", &cormengoVitorias, &cormengoEmpates, &cormengoSaldo, &flaminthiansVitorias, &flaminthiansEmpates, &flaminthiansSaldo);

	cormengoPontos = (cormengoVitorias * 3) + (cormengoEmpates);
	flaminthiansPontos = (flaminthiansVitorias * 3) + (flaminthiansEmpates);

	if (cormengoPontos > flaminthiansPontos) {
		classificacao = 'C';
	} else if (flaminthiansPontos > cormengoPontos) {
		classificacao = 'F';
	} else {
		if (cormengoSaldo > flaminthiansSaldo) {
			classificacao = 'C';
		} else if (flaminthiansSaldo > cormengoSaldo) {
			classificacao = 'F';
		}
	}

	printf("%c\n", classificacao);
	return 0;
}
