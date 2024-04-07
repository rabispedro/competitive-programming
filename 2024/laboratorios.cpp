#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main()
{
	fastio;

	int N;
	cin >> N;

	if (N >= 1 && N <= 35)
		cout << "1\n";
	else if (N >= 36 && N <= 70)
		cout << "2\n";
	else if (N >= 71 && N <= 105)
		cout << "3\n";
	else if (N >= 106 && N <= 150)
		cout << "4\n";
	else
		cout << "erro\n";

	return 0;
}