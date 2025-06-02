#include<bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define DEBUG(x) cout << #x << ": '" << x << "'\n"
#define REP(i, a, b) for(int i=a; i<=b; i++)

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const int POS_INF = 1e9;
const int NEG_INF = 1e-9;
const int MOD = 1e9+7;

int main () {
	FASTIO;

	int t, caso=0;
	cin >> t;

	while(t--) {
		int n, price, mile=0, juice=0;
		string plan;

		cin >> n;
		while(n--) {
			cin >> price;

      ++price;
      mile += 10 * ceil(price / 30.0);
		  juice += 15 * ceil(price / 60.0);
    }

		if(mile == juice)
			plan = "Mile Juice";
		else if (mile < juice)
			plan = "Mile";
		else
			plan = "Juice";
		
		cout << "Case " << ++caso << ": " << plan << " " << min(mile, juice) << "\n";
	}

	return 0;
}
