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

string soma(string& a, string& b);

int N, cont;
string vet[3] = { "UAI", "TREM", "SO" };
string k = "10";

int main() {
    FASTIO;

    cin >> N;

    vector<string> fibo(N, "");

    fibo[0] = "1";
    fibo[1] = "1";

	cout << fibo[0] << " " << fibo[1];
    for(int i=2; i<N; i++) {
		fibo[i] = soma(fibo[i-1], fibo[i-2]);

        if (fibo[i].length() >= k.length()) {
            fibo[i] = k;
            k.push_back('0');
            cout << " " << vet[cont];
            cont = (cont+1) % 3;
        } else {
			cout << " " << fibo[i];
        }
    }

	cout << ENDL;

    return 0;
}

string soma(string& a, string& b) {
    string resultado = "";
    int carry = 0;

    int dif = abs(int(a.size() - b.size()));
    string zeros (dif, '0');

    if (a.size() < b.size())
        a = zeros + a;
    else if (b.size() < a.size())
        b = zeros + b;

    for (int i = a.size() - 1; i >= 0; i--) {
        int soma = (a[i] - '0') + (b[i] - '0') + carry;
        carry = soma / 10;
        resultado += (soma % 10) + '0';
    }

    if (carry)
        resultado += carry + '0';

    reverse(resultado.begin(), resultado.end());

    return resultado;
}