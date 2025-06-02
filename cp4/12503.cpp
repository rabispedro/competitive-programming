#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define debug(x) cout << #x << ": '" << x << "'\n"
#define rep(i, a, b) for(int i=a; i<b; i++)

using namespace std;

typedef long long int lli;

int main () {
	fastio;

	int t, n;
	cin >> t;

	while(t--) {
		cin >> n;

		lli pos = 0;
		vector<int> steps;
		string line;

		getline(cin, line);
		rep(i, 0, n) {
			getline(cin, line);

			if (line == "LEFT") steps.push_back(-1);
			else if (line == "RIGHT") steps.push_back(1);
			else if (line.size() >= 7) {
				steps.push_back(steps[stoi(line.substr(7))-1]);
			}

			pos += steps[i];
		}


		cout << pos << "\n";
	}

	return 0;
}
