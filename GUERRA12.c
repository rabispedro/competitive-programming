#include<stdlib.h>
#include<stdio.h>

int N, vet[100010], sum[100010], ind;

int main() {
	scanf("%d", &N);

	for (int i=0; i<N; i++) {
		scanf("%d", &vet[i]);

		if (i==0) {
			sum[i] = vet[i];
		} else {
			sum[i] = vet[i] + sum[i-1];
		}
	}

	for (int i=0; i<N; i++) {
		if (sum[i] == (int) (sum[N-1]/2)) {
			ind = i+1;
			break;
		}
	}

	printf("%u\n", (ind));
	return 0;
}