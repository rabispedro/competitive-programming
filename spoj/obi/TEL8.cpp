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

string src, dst;
map<char, char> mapper;

int main () {
	FASTIO;

	mapper['A'] = '2';
	mapper['B'] = '2';
	mapper['C'] = '2';

	mapper['D'] = '3';
	mapper['E'] = '3';
	mapper['F'] = '3';

	mapper['G'] = '4';
	mapper['H'] = '4';
	mapper['I'] = '4';

	mapper['J'] = '5';
	mapper['K'] = '5';
	mapper['L'] = '5';

	mapper['M'] = '6';
	mapper['N'] = '6';
	mapper['O'] = '6';

	mapper['P'] = '7';
	mapper['Q'] = '7';
	mapper['R'] = '7';
	mapper['S'] = '7';

	mapper['T'] = '8';
	mapper['U'] = '8';
	mapper['V'] = '8';

	mapper['W'] = '9';
	mapper['X'] = '9';
	mapper['Y'] = '9';
	mapper['Z'] = '9';

	cin >> src;
	
	REP(i, 0, int(src.size() - 1)) {
		if (mapper.find(src[i]) != mapper.end()) dst += mapper[src[i]];
		else dst += src[i];
	}
	
	cout << dst << "\n";

	return 0;
}
