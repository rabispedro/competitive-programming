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

int A, B, C, vice;

int main () {
	FASTIO;

	cin >> A >> B >> C;

	if (A >= B && B >= C) vice = B;
	else if (A >= C && C >= B) vice = C;
	else if (B >= A && A >= C) vice = A;
	else if (B >= C && C >= A) vice = C;
	else if (C >= A && A >= B) vice = A;
	else vice = B;
	
	cout << vice << "\n";

	return 0;
}
