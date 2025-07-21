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

int V, caso = 1;
int cinquenta, dez, cinco, um;

int main () {
	FASTIO;

	while (cin >> V, (V > 0)) {
		cinquenta = (V / 50);
		V -= (50 * cinquenta);

		dez = (V / 10);
		V -= (10 * dez);

		cinco = (V / 5);
		V -= (5 * cinco);

		um = V;
		
		cout << "Teste " << caso++ << "\n";
		cout << cinquenta << " " << dez << " " << cinco << " " << um << "\n";
	}

	return 0;
}
