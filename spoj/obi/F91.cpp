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

ll f91(ll num);
int N;

int main () {
	FASTIO;

	while(cin >> N, (N > 0)) {
		cout << "f91(" << N << ") = " << f91(N) << "\n";
	}

	return 0;
}

ll f91(ll num) {
	if (num <= 100) return f91(f91(num + 11));
	return num - 10;
}
