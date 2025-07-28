#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

map<string, string> produtos;
list<string> ordem;
string C, A, L;

int main()
{
	fastio;

	while (true)
	{
		cin >> C;
		if (C == "0")
			break;

		cin >> A >> L;
		if (A == "adicionar")
		{
			if (produtos[C] == "")
				ordem.push_back(C);

			produtos[C] = L;
		}
		else if (A == "remover")
		{
			if (produtos[C] == L)
				produtos[C] = "nao encontrado";
		}
	}

	for (auto cod : ordem)
	{
		cout << cod << " " << produtos[cod] << "\n";
	}

	return 0;
}
