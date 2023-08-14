#include<stdio.h>

int N, cont, x;

int main() {
	scanf("%d", &N);

	while(N--) {
		scanf("%d", &x);
		if (x != 1) cont++;
	}

	printf("%d\n", cont);
	return 0;
}
