#include <bits/stdc++.h>

using namespace std;

int J, R, jogadores[500], indice = 0;

int main()
{
	scanf("%d %d", &J, &R);

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < J; j++)
		{
			int pontos;
			scanf("%d", &pontos);
			jogadores[j] += pontos;
		}
	}

	for (int i = 1; i < J; i++)
		if (jogadores[indice] <= jogadores[i])
			indice = i;

	printf("%d\n", (indice + 1));
	return 0;
}
