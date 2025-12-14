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

int N, valor, pontos;
unordered_map<string, int> valores;
string entrada, chave;

int main () {
	FASTIO;

	cin >> N;

	while(N--) {
		cin >> chave >> valor;
		valores[chave] = valor;
	}

	do {
		cin >> entrada;
		if (valores.count(entrada))
			pontos += valores[entrada];

	} while (entrada != ".");

	cout << pontos << ENDL;

	return 0;
}
