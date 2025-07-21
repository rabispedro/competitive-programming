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

string res ("sim");
ll N;
bool primo;

int main () {
	FASTIO;

	cin >> N;

	N = abs(N);
	primo = (N == 2) || (N & 1); // N é 2 ou ímpar
	ll topo = sqrt(N);

	for (int i=3; primo && i <= topo; i += 2)
		if (!(N%i)) primo = false;

	if (!primo) res = "nao";

	cout << res << "\n";

	return 0;
}
