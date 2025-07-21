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

int N, p, caso, vencedor;

int main () {
	FASTIO;

	while(cin >> N, (N > 0)) {
		REP(i, 0, N-1) {
			cin >> p;

			if (p == i+1) vencedor = p;
		}
		
		cout << "Teste " <<  (++caso) << "\n";
		cout << vencedor << "\n";
	}


	return 0;
}
