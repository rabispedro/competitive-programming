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

	int b, n;
	while(cin >> b >> n, (b && n)) {
		vi banks (b, 0);
		string result ("S");

		int reserve;
		REP(i, 0, b-1) {
			cin >> reserve;
			banks[i] = reserve;
		}

		REP(i, 0, n-1) {
			int debtor, creditor, value;
			cin >> debtor >> creditor >> value;

			banks[debtor-1] -= value;
			banks[creditor-1] += value;
		}

		REP(i, 0, b-1) {
			if(banks[i] < 0) {
				result = "N";
				break;
			} 
		}

		cout << result << "\n";
	}

	return 0;
}
