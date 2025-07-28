#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main()
{
	fastio;

	int N;
	bool result = true;
	list<int> ingredientes, sanduiche;

	cin >> N;
	while (N--)
	{
		int ingrediente;
		cin >> ingrediente;
		ingredientes.push_back(ingrediente);
	}

	while (ingredientes.size() > 0)
	{
		if (ingredientes.front() < ingredientes.back())
		{
			if (ingredientes.front() < sanduiche.front())
			{
				sanduiche.push_front(ingredientes.front());
			}
			else
			{
				sanduiche.push_back(ingredientes.front());
			}
			ingredientes.pop_front();
		}
		else
		{
			if (ingredientes.back() < sanduiche.front())
			{
				sanduiche.push_front(ingredientes.back());
			}
			else
			{
				sanduiche.push_back(ingredientes.back());
			}
			ingredientes.pop_back();
		}
	}

	while (sanduiche.size() > 0)
	{
		int atual = sanduiche.front();

		sanduiche.pop_front();
		if (sanduiche.size() == 0)
			break;

		int proximo = sanduiche.front();

		if (atual >= proximo)
		{
			result = false;
			break;
		}
	}

	cout << (result ? "sim" : "nao") << "\n";

	return 0;
}
