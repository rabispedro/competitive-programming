#include<stdio.h>
#define MAX 21

long int fatorial(const int n);
int N, qtd;
long int fatoriais[MAX];

int main() {
	fatorial(MAX);

	scanf("%d", &N);
	while(N > 1) {
		int cont=3;
		while(N > fatoriais[cont]) {
			cont++;
		}
		N -= (int)fatoriais[cont-1];
		qtd++;
	}
	if (N == 1) qtd++;

	printf("%d\n", qtd);
	return 0;
}

long int fatorial(const int n) {
	if (fatoriais[n] != 0) return fatoriais[n];

	fatoriais[0] = 1;
	fatoriais[1] = 1;

	for(int i=2; i<n; i++) {
		fatoriais[i] = fatoriais[i-1]*i;
	}

	return fatoriais[n];
}
