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

  int caso=1;
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    vi walls(n);

    REP(i, 0, n-1) cin >> walls[i];

    int hj=0, lj=0;

    REP(i, 0, n-2) {
      if (walls[i] < walls[i+1]) hj++;
      else if (walls[i+1] < walls[i]) lj++;
    }

    cout << "Case " << caso++ << ": " << hj << " " << lj << "\n";
  }

	return 0;
}

