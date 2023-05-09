#include<stdio.h>
#include<stdlib.h>

int N, caminhos[10000][2], visitados[10000];
char resp = 'S';

void percorreGrafo(int mat[][], int visit[]);

int main() {
	scanf("%d", &N);


	for (int i=0; i<N; i++) {
		if (visitados[i] == 0) {
			resp = 'N';
			break;
		}
	}

	printf("%c\n", resp);
	return 0;
}

void percorreGrafo(int mat[][], int visit[]) {

	
	return;
}
