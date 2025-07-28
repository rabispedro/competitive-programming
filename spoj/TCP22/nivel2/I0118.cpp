#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAX 1010

using namespace std;

int N, M, qtd, L, x;
bool atual[MAX], inicial[MAX], interruptores[MAX][MAX];

bool desligado();
bool ciclo();

int main()
{
	fastio;

	cin >> N >> M;
	cin >> L;

	while (L--)
	{
		cin >> x;
		atual[x - 1] = inicial[x - 1] = true;
	}

	for (int i = 0; i < N; i++)
	{
		cin >> L;

		while (L--)
		{
			cin >> x;
			interruptores[i][x - 1] = true;
		}
	}

	while (!(desligado()))
	{
		for (int i = 0; i < N; i++)
		{
			atual[i] ^= interruptores[qtd % N][i];
		}

		if (ciclo())
		{
			qtd = -1;
			break;
		}

		qtd++;
	}

	cout << qtd << "\n";
	return 0;
}

bool desligado()
{
	for (int i = 0; i < M; i++)
		if (atual[i])
			return false;
	return true;
}

bool ciclo()
{
	for (int i = 0; i < M; i++)
		if (atual[i] != inicial[i])
			return false;
	return (qtd % M == M - 1);
}
