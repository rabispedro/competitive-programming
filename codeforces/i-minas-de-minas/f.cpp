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
typedef vector<ll> vll;
typedef pair<int, int> pii;

const int POS_INF = 1e9;
const int NEG_INF = 1e-9;
const int MOD = 1e9+7;

ll N, T, G, tempo, peso;
vll pesos, tempos;

ll busca_minimo(vll& vetor, ll limite);

int main () {
	FASTIO;

	cin >> N >> T >> G;

    // 1a iteracao
    cin >> tempo >> peso;
    tempos.PB(tempo);
    pesos.PB(peso);

    // Acumula os anteriores
    REP(i, 1, N-1) {
        cin >> tempo >> peso;
        tempo += tempos[i-1];
        peso += pesos[i-1];
        
        tempos.PB(tempo);
        pesos.PB(peso);
    }

	//	Talvez não seja necessário ordenar
    // sort(tempos.begin(), tempos.end());
    // sort(pesos.begin(), pesos.end());

    tempo = busca_minimo(tempos, T);
    peso = busca_minimo(pesos, G);

    cout << max(tempo, peso) << ENDL;

	return 0;
}

ll busca_minimo(vll& vetor, ll limite) {
    ll res=-1;
    ll inicio=0, meio=0, fim = N;

    while (inicio <= fim) {
        meio = (meio + fim) >> ll(1);

        if (vetor[meio] > limite) {
            fim = meio-1;
        }
        else {
            res = meio;
            inicio = meio + 1;
        }
    }

    return res+1;
}

// Caso 1
// tempo = 5
// peso = 5
// tempos => 1 3 6 : 2
// pesos => 1 3 7 : 2
// max(2, 2) => 2

// Caso 2
// tempo = 10
// peso = 100
// tempos => 2 5 10 16 24 : 3
// pesos => 10 25 45 75 125 : 4
// max(3, 4) => 4
