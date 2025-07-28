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

string src;
int espacos;

int main () {
	FASTIO;

	getline(cin, src);

	REP(i, 0, int(src.size()-1)) {
		// Printa espaço ou letras ímpares (com ajuste de espaçamento)
		if (src[i] == ' ') {
			cout << src[i];
			espacos++;
		} else if (((i + espacos) & 1)) {
			cout << src[i];
		}
	}

	cout << "\n";

	return 0;
}
