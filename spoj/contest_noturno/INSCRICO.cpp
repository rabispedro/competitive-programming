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

	unordered_map<string, int> inscricoes;
	queue<string> ordem;
	while(1) {
		int n;
		cin >> n;
		if (!n) break;

		while(n--) {
			string chave, valor;
			cin >> valor >> chave;

			if (inscricoes.find(chave) == inscricoes.end()) {
				inscricoes[chave] = 1;
				ordem.push(chave);
			} else {
				inscricoes[chave]++;
			}
		}
	}

	while(!ordem.empty()) {
		cout << ordem.front() << " " << inscricoes[ordem.front()] << "\n";
		ordem.pop();
	}

	return 0;
}
