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

vector<string> happyBirthday = {
	"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you" };

int main () {
	FASTIO;
	vector<string> people;

	int n;
	cin >> n;

	int songTime = happyBirthday.size();
	if (n > int(happyBirthday.size()))
		songTime *= ceil(float(n) / int(happyBirthday.size()));

	while(n--) {
		string person;
		cin >> person;
		people.PB(person);
	}

	REP(i, 0, songTime-1) {
		cout << people[i%people.size()] << ": " << happyBirthday[i%happyBirthday.size()] << "\n";
	}

	return 0;
}
