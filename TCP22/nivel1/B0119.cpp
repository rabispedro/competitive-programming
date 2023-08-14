#include<stdio.h>

int N, primeiro, outros;
char resposta = 'S';

int main() {
	scanf("%d", &N);
	scanf("%d", &primeiro);

	while(--N) {
		scanf("%d", &outros);
		if(outros > primeiro) resposta = 'N';
	}

	printf("%c\n", resposta);
	return 0;
}
