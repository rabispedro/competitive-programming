#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cout << #x << ": " << x << "\n"

using namespace std;

typedef long long int lli;

lli N, B, x, y, newX, newY;

int main()
{
	cin >> N >> B;

	lli div = (lli)B / (2 * N);
	debug(div);

	lli mod = B % (2 * N);
	debug(mod);

	debug(B);
	debug(N);
	debug(x);
	debug(y);

	x = y = (lli)B / (2 * N);
	x = max(x - 1, (lli)0);
	y = max(y - 2, (lli)0);
	B = mod;
	N -= div + 1;

	debug(B);
	debug(N);
	debug(x);
	debug(y);

	newX = (x + max(min(N, B), (lli)0));
	B -= N;
	newY = (y + max(min(N - 1, B), (lli)0));
	B -= N - 1;
	newX -= max(min(N - 1, B), (lli)0);
	B -= N - 1;
	newY -= max(min(N - 2, B), (lli)0);

	cout << newY + 1 << " " << newX + 1 << "\n";

	return 0;
}
