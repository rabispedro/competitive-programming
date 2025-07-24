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

int N, L, duracao, menor = POS_INF;
queue<int> fila;
vector<pair<int, int>> atendentes; // <minutos, quantidade>

int main () {
	FASTIO;

	cin >> N >> L;

	REP(i, 0, N-1)
		atendentes.push_back(MP(0, 0));

	REP(i, 0, L-1) {
		cin >> duracao;
		fila.push(duracao);
	}

	// Primeiro Disponível, Primeiro Ocupado
	while(!fila.empty()) {
		REP(i, 0, N-1) {
				if (atendentes[i].first == 0) { // Ocupa o atendente
					atendentes[i].first += fila.front();
					atendentes[i].second++;
					fila.pop();
				}

				if (menor > atendentes[i].first)
					menor = atendentes[i].first;

				if (fila.empty()) break;
		}
		
		// Subtrai de todos os atendentes a menor duração em minutos
		REP(i, 0, N-1)
			atendentes[i].first -= menor;
	}

	REP(i, 0, N-1)
		cout << i+1 << " " << atendentes[i].second << "\n";

	return 0;
}
