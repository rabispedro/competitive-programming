#include<stdio.h>
#include<stdlib.h>

int L, pedacos=1;
float nextL;

int main() {
	scanf("%d", &L);

	nextL = L;
	while ( nextL >= 2.00f) {
		pedacos *= 4;
		nextL = nextL/2.00f;
	}

	printf("%d\n", pedacos);
	return 0;
}