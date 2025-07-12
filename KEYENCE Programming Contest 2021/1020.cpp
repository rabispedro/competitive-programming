#include<bits/stdc++.h>

using namespace std;

int main() {
	int N, ano, mes, dia;
	scanf("%d", &N);

	ano = N / 365;
	N -= ano * 365;
	mes = N / 30;
	N -= mes * 30;
	dia = N;

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
	return 0;
}
