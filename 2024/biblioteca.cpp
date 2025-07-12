#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main()
{
	fastio;

	int N;
	set<int> livros;

	cin >> N;
	while (N--)
	{
		int ano;
		cin >> ano;
		livros.insert(ano);
	}

	cout << livros.size() << "\n";

	return 0;
}
