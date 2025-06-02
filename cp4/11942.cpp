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
	int N; cin >> N;
	cout << "Lumberjacks:\n";

	while(N--) {
		bool crescente = true, decrescente = true;

		vi lumberjacks(10);
		REP(i, 0, 9) cin >> lumberjacks[i];

		REP(i, 0, 8) {
			if (crescente && lumberjacks[i] > lumberjacks[i+1])
				crescente = false;

			if (decrescente && lumberjacks[i] < lumberjacks[i+1])
				decrescente = false;

			if(!crescente && !decrescente) break;
		}

		cout << ((crescente || decrescente) ? "Ordered" : "Unordered") << "\n";
	}

	return 0;
}
