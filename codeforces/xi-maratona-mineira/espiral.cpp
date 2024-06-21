#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cout << #x << " " << x << "\n"

using namespace std;

typedef long long int lli;

lli N, B;

int main()
{
	cin >> N >> B;

	// lli x = 0, y = 0;

	debug((N * N) / B);
	debug((N * N) % B);

	// while (B > (4 * N - 4))
	// {
	// 	B -= ((4 * N - 4));
	// 	x++;
	// 	y++;
	// 	N -= 2;
	// }

	// lli temp = B;

	// lli newX = (x + max(min(N - 1, temp), (lli)0));
	// temp -= N;

	// lli newY = (y + max(min(N - 1, temp), (lli)0));
	// temp -= N - 1;

	// newX -= max(min(N - 1, temp), (lli)0);
	// temp -= N - 1;

	// newY -= max(min(N - 2, temp), (lli)0);

	// printf("%lld %lld\n", (newY + 1), (newX + 1));

	return 0;
}
