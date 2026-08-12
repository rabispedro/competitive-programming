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
typedef vector<set<int>> vsi;
typedef pair<int, int> pii;

const int POS_INF = 1e9;
const int NEG_INF = 1e-9;
const int MOD = 1e9+7;

int n, m, a, b, cache[100010], van=0;
vsi graph;

void solve(int idx);

int main () {
	FASTIO;

	cin >> n >> m;

	REP(i, 0, n-1)
		graph.push_back({});

	REP(i, 0, m-1) {
		cin >> a >> b;
		graph[a-1].insert(b-1);
		graph[b-1].insert(a-1);
	}

	// Lista de Adjacencia
	// 1: [2, 2] 
	// 2: [1, 3]
	// 3: [2, 4]
	// 4: [3, 5]
	// 5: []

	REP(i, 0, n-1)
		solve(i);

	// cout << "\n";

	// for (auto i  : graph) {
	// 	for (auto j : i) {
	// 		cout << j << " ";
	// 	}
	// 	cout << "\n";
	// }

	cout << van << "\n";

	return 0;
}

void solve(int idx) {
	DEBUG(idx);
	DEBUG(cache[idx]);
	
	if(cache[idx]) {
		cout << "retornado!\n";
		return;
	}

	
	cache[idx] = van+1;
	for (auto i : graph[idx])
		cache[i] = van+1;

	van++;
}
