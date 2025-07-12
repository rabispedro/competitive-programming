#include<bits/stdc++.h>

using namespace std;

int main() {
	int A, B, qtd100=0, qtd50=0, qtd20=0, qtd10=0, qtd5=0, qtd2=0, qtd1=0;
	scanf("%d", &A);
	B = A;

	if (A >= 100) {
		qtd100 = (A / 100);
		A -= qtd100 * 100;
	}

	if(A >= 50) {
		qtd50 = (A / 50);
		A -= qtd50 * 50;
	}

	if(A >= 20) {
		qtd20 = (A / 20);
		A -= qtd20 * 20;
	}

	if(A >= 10) {
		qtd10 = (A / 10);
		A -= qtd10 * 10;
	}

	if(A >= 5) {
		qtd5 = (A / 5);
		A -= qtd5 * 5;
	}

	if(A >= 2) {
		qtd2 = (A / 2);
		A -= qtd2 * 2;
	}

	qtd1 = A;

	printf("%d\n", B);
	printf("%d nota(s) de R$ 100,00\n", qtd100);
	printf("%d nota(s) de R$ 50,00\n", qtd50);
	printf("%d nota(s) de R$ 20,00\n", qtd20);
	printf("%d nota(s) de R$ 10,00\n", qtd10);
	printf("%d nota(s) de R$ 5,00\n", qtd5);
	printf("%d nota(s) de R$ 2,00\n", qtd2);
	printf("%d nota(s) de R$ 1,00\n", qtd1);
	return 0;
}