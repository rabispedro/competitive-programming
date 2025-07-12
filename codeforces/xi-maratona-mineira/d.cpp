#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cout << #x << ": " << x << "\n"

using namespace std;

int main()
{
	fastio;
	int N, L, R = 0;
	cin >> N >> L;
	list<int> filhos;

	while (N--)
	{
		int x;
		cin >> x;
		filhos.push_front(100 - x);
	}
	filhos.sort();

	for (auto f : filhos)
	{
		if (L >= f)
		{
			L -= f;
			R++;
		}
		else
			break;
	}

	cout << R << "\n";
	return 0;
}