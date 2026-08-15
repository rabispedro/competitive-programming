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
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;

const int POS_INF = 1e9;
const int NEG_INF = 1e-9;
const int MOD = 1e9+7;

ll n, m, a, b, cache[100010], k;
vvi graph;

void dfs(int idx);

int main () {
	FASTIO;

	cin >> n >> m;

	REP(i, 0, n-1)
		graph.push_back({});

	REP(i, 0, m-1) {
		cin >> a >> b;
		graph[a-1].push_back(b-1);
		graph[b-1].push_back(a-1);
	}

	REP(i, 0, n-1)
		if(!cache[i])
			dfs(i);

	cout << k << "\n";

	return 0;
}

void dfs(int idx) {
	if (!cache[idx])
		cache[idx] = ++k;

	for(int i=0; i < graph[idx].size(); i++) {
		auto valor = graph[idx][i];
		if (!cache[valor]) {
			cache[valor] = cache[idx];
			dfs(valor);
		}
	}
}
