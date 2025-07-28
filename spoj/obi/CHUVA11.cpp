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

int N, chuva;
vi mapa1, mapa2;

int main () {
	FASTIO;
	
	cin >> N;
	
	REP(i, 0, (N*N) - 1) {
		cin >> chuva;
		mapa1.PB(chuva);
	}

	REP(i, 0, (N*N) - 1) {
		cin >> chuva;
		mapa2.PB(chuva);
	}
	
	REP(i, 1, (N * N)) {
		cout << (mapa1[i-1] + mapa2[i-1]) << " ";
		
		if (!(i%N)) cout << "\n";
	}

	return 0;
}
