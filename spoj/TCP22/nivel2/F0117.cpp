#include <bits/stdc++.h>

using namespace std;

int N, K, atual, anterior, qtd;

int main()
{
	list<int> lista;

	scanf("%d", &N);
	scanf("%d", &K);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &atual);
		lista.push_back(atual);
	}
	lista.sort();

	atual = lista.back();
	anterior = 0;

	while (!lista.empty())
	{
		if (K < 0)
			break;

		if (K > 0)
			K--;
		else if (anterior != atual)
			break;

		lista.pop_back();
		anterior = atual;
		atual = lista.back();
		qtd++;
	}

	printf("%d\n", qtd);
	return 0;
}
