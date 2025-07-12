#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define debug(x) cout << #x << "= '" << x << "'\n"
#define rep(i, a, b) for(int i=a; i<b; i++)

using namespace std;

typedef long long int lli;

int main () {
	fastio;

	int t, caso=0;
	cin >> t;

	while(t--) {
		int n, k, result = -1e9;
		cin >> n;

		while(n--) {
			cin >> k;
			if (k > result) result = k;
		}

		cout << "Case " << ++caso << ": " << result << "\n";
	}

	return 0;
}
