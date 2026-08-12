#include<bits/stdc++.h>
#include <cstring>

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

int n, k, cache[100010], atual=1;
vvi graph;

int dfs(int idx);

int main () {
	FASTIO;

	cin >> n;

	REP(i, 0, n-1)
		graph.push_back({});

	// Lista de Adjacencia
	// 1: [2, 3]
	// 2: [4, 5]
	// 3: [6]
	// 4: []
	// 5: []
	// 6: [7]
	// 7: []
	// ...
	// n-1: []

	REP(i, 0, n-2) {
		cin >> k;
		graph[k-1].push_back(atual++);
	}

	REP(i, 0, n-1)
		cout << dfs(i) << "\n";

	return 0;
}

int dfs(int idx) {
	if (cache[idx]) return cache[idx];

	cache[idx] = graph[idx].size();
	for (auto i: graph[idx])
		cache[idx] += dfs(i);

	return cache[idx];
}
