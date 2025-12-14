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
const int MAX_N = 1e5+10;

int i, f, p, diff, sum;
int numbers[MAX_N], cache[MAX_N];
vi primos;
bool ehComposto;

void crivo(int n);

int main () {
	FASTIO;
	
	cin >> i >> f >> p;
	diff = (f - i);

	memset(cache, 1, sizeof cache);
	crivo(MAX_N);

	REP(j, 0, diff) {
		ehComposto = false;

		REP(k, 0, p-1) {
			if (!((j+i)%primos[k])) {
				ehComposto = true;
				break;
			}
		}

		if (!ehComposto)
			sum += (j+i);
	}

	cout << sum << ENDL;

	return 0;
}

void crivo(int n) {
	cache[0] = cache[1] = 0;

	for (int i=2; i<n && int(primos.size()) < p; i++) {
		if(cache[i]) {
			primos.PB(i);
			for (int j=i+i; j<n && int(primos.size()) < p; j+=i)
				cache[j] = 0;
		}
	}
}

