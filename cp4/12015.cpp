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
		list<pair<string, int>> sites;
		int lucky = NEG_INF;

		REP(i, 1, 10) {
			string site, result;
			int relevance;
			cin >> site >> relevance;

			sites.PB(MP(site, relevance));
			if (relevance > lucky) lucky = relevance;
		}

		cout << "Case #" << ++caso << ":\n";
		for(auto kvp : sites)
			if(kvp.S == lucky)
				cout << kvp.F << "\n";
	}

	return 0;
}
