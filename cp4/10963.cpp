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

  /*
  * O que eu preciso fazer?
  *  - Verificar se um buraco pode ou não ser fechado por toda sua extensão
  * 
  * Qual o caso que dá errado?
  *  - Quando um buraco é fechado, porém ainda há rachaduras
  * 
  * Qual o caso que dá certo?
  *  - Quando todas as rachaduras tem o mesmo tamanho, pois assim se movimentarão igualmente
  *
  * Qual a entrada importante?
  *  - y1: ultima celula sem rachadura ao norte
  *  - y2: ultima celula sem rachadura ao sul
  *
  * rachaduraAtual = y1 - y2
  *
  * Importante:
  *  - Nao haverão ilhas
  */

  string clearLine;
  int t, cols;
  cin >> t;

  while(t--) {
    getline(cin, clearLine);
    cin >> cols;

    string res ("yes");
    int norte, sul;

    cols--;
    cin >> norte >> sul;

    int rachadura = norte - sul; // Primeira rachadura é o parametro de comparacao

    while(cols--) {
      cin >> norte >> sul;
      if (norte - sul != rachadura)
        res = "no";
    }

    cout << res << ((t) ? "\n\n" : "\n");
  }

	return 0;
}
