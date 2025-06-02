#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define debug(x) cout << #x << "= '" << x << "'\n"
#define rep(i, a, b) for(int i=a; i<b; i++)

using namespace std;

typedef long long int lli;

int main () {
	fastio;

	int n;
	cin >> n;

	while(n--) {
		int f;
		lli sum=0;
		cin >> f;

		rep(i, 0, f) {
			int meters, animals, environment;
			cin >> meters >> animals >> environment;
			sum += (0.5F + ((long double) meters / animals ) * environment * animals);
		}

		cout << sum << "\n";
	}

	return 0;
}
