#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cout << #x << " " << x << "\n"
#define MAX 110

using namespace std;

int main()
{
	fastio;
	int N, D, R = 0;
	cin >> N >> D;
	list<int> paes;
	bitset<MAX> ordem;

	while (N--)
	{
		int x;
		cin >> x;
		paes.push_back(x);
	}

	while (!paes.empty())
	{
		for (auto pao : paes)
		{
			if (abs(pao) == D)
			{
				paes.remove(pao);
				R++;
			}
			else if (abs(pao) > D)
				paes.remove(pao);
			pao--;
		}
	}

	cout << R << "\n";

	return 0;
}