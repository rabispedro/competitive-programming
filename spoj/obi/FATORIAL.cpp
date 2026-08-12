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
const int MAX_N = 1010;

ll N;
ll fat[MAX_N], fibo[MAX_N];

ll fatorial(const ll n);
ll fibonacci(const ll n);

int main () {
	FASTIO;

	// cin >> N;
	N = 50;
	// fatorial(N);

	for(ll i=0; i<N; i++)
		// cout << "fat(" << i << "): " << fatorial(i) << ENDL;
		cout << "fibo(" << i << "): " << fibonacci(i) << ENDL;

	return 0;
}

ll fatorial(const ll n) {
	if (fat[n])
		return fat[n];

	fat[0] = 1;
	fat[1] = 1;
	for(ll i = 2; i<MAX_N; i++)
		fat[i] = (i * fat[i-1]) % MOD;

	return fat[n];
}

ll fibonacci(const ll n) {
	if (fibo[n])
		return fibo[n];
	
	fibo[0] = 1;
	fibo[1] = 1;

	for(ll i=2; i<MAX_N; i++)
		fibo[i] = (fibo[i-1] + fibo[i-2]);

	return fibo[n];
}

