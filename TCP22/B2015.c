#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b);

int vet[4];
char resposta = 'N';

int main() {
	scanf("%d %d %d %d", &vet[0], &vet[1], &vet[2], &vet[3]);

	qsort(vet, 4, sizeof(int), compare);

		if (
		(vet[2] <= (vet[1] + vet[0]))
		|| (vet[3] <= (vet[1] + vet[0]))
		|| (vet[3] <= (vet[2] + vet[0]))
		|| (vet[3] <= (vet[2] + vet[1]))
	) {
		resposta = 'S';
	}

	printf("%c\n", resposta);
	return 0;
}

int compare(const void *a, const void *b) {
  return (*(int*)a - *(int*)b);
}
