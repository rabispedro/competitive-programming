#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define debug(x) cout << #x << "= '" << x << "'\n"

using namespace std;

int main () {
	fastio;

	int t;
	cin >> t;

	int l, r, u, d;

	while(t--) {
		cin >> l >> r >> d >> u;

		if (l > 0 && l == d && d == r && r == u) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}

