#include<bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define DEBUG(x) cout << #x << ": '" << x << "'\n"
#define REP(i, a, b) for(int i=a; i<=b; i++)
#define ENDL "\n"

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

const int MAX_N = 1e8;

bool ok(int tempo);
int busca_binaria();

int N, M, menorTempo, maior;
int tempos[MAX_N];

int main () {
	FASTIO;

	cin >> N >> M;

	REP(i, 0, N-1) {
		cin >> tempos[i];
		if (tempos[i] > maior) maior = tempos[i];
	}

	cout << busca_binaria() << ENDL;

	return 0;
}

bool ok(int tempo) {
	int res=0;

	REP(i, 0, N-1)
		res += (tempo / tempos[i]);

	return (res >= M);
}

int busca_binaria() {
	int inicio=1, meio, fim=(maior*M), res = -1;

	while(inicio <= fim) {
		meio = (inicio + fim) / 2;

		if (ok(meio)) {
			res = meio;
			fim = meio-1;
		} else {
			inicio = meio+1;
		}
	}

	return res;
}
