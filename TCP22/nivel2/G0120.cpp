#include <bits/stdc++.h>

using namespace std;

int C, V, premio = 100, vet[100], m;

int main()
{
	scanf("%d", &C);
	for (int i = 0; i < C; i++)
	{
		scanf("%d", &V);
		if (i == 0)
			vet[i] += V;
		else
			vet[i] += V + vet[i - 1];
	}
	m = vet[0];
	for (int i = 0; i < C; i++)
	{
		if (m < vet[i])
			m = vet[i];
	}
	premio = max(premio + m, premio);
	printf("%d\n", premio);
	return 0;
}
