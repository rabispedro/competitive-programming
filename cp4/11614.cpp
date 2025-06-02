#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define debug(x) cout << #x << "= '" << x << "'\n"

using namespace std;

typedef long long int lli;

int main () {
	fastio;

	int n;
	cin >> n;

	while(n--) {
		lli w;
		cin >> w;

		int cont = 0;
		for(int i=1; w > 0; i++) {
			w -= i;
			if (w >= 0)
				cont++;
		}

		cout << cont << "\n";
	}

	return 0;
}

