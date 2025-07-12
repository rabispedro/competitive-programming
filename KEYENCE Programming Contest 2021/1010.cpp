#include<bits/stdc++.h>

using namespace std;

int main() {
	int cod1, qtd1, cod2, qtd2;
	double val1, val2;

	scanf("%d %d %lf", &cod1, &qtd1, &val1);
	scanf("%d %d %lf", &cod2, &qtd2, &val2);

	printf("VALOR A PAGAR: R$ %.2lf\n", (qtd1*val1 + qtd2*val2));

	return 0;
}