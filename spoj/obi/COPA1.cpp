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

int M, N, t1, t2 = 1;

int main () {
	FASTIO;
	vector<char> times = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P' };
	
	while(cin >> M >> N) {
		if (M > N) {
			times.push_back(times[t1]);
		} else {
			times.push_back(times[t2]);
		}

		t1 += 2;
		t2 += 2;
	}

	cout << times[times.size() - 1] << "\n";

	return 0;
}

