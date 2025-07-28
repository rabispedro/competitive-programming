#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main()
{
	fastio;
	string arquivo;
	cin >> arquivo;

	for (auto letra : arquivo)
	{
		if (letra != 'a' &&
				letra != 'A' &&
				letra != 'e' &&
				letra != 'E' &&
				letra != 'i' &&
				letra != 'I' &&
				letra != 'o' &&
				letra != 'O' &&
				letra != 'u' &&
				letra != 'U')
		{
			cout << letra;
		}
	}
	cout << "\n";

	return 0;
}