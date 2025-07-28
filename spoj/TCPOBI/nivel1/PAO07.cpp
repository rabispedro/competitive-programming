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
const int MAXN = 1e5+10;

int n, k;
int paos[MAXN];

bool corta_pao(int tamanho);
int escolhe_medida();

int main () {
	FASTIO;

	cin >> n;
	cin >> k;

	REP(i, 0, k-1) cin >> paos[i];

	cout << escolhe_medida() << "\n";

	return 0;
}

bool corta_pao(int tamanho) {
	int soma = 0;
	
	REP(i, 0, (k-1)) soma += (paos[i] / tamanho);

	return (soma>= n);
}

int escolhe_medida() {
	int ini = 1, fim = MAXN, mid, ans = -1;

	while(ini <= fim) {
		mid = (ini + fim) / 2;

		if (corta_pao(mid)) {
			ini = mid + 1;
			ans = mid;
		}
		else  {
			fim = mid - 1;
		}
	}

	return ans;
}

