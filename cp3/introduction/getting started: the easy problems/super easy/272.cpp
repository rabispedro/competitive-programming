#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

string input;
bool isClosing;

int main() {
	fastio;

	while(getline(cin, input)) {
		for(int i=0; i<input.size(); i++) {
			if (input.at(i) == 34) {
				if(isClosing) input.replace(i, 1, "''");
				else input.replace(i, 1, "``");
				isClosing = !isClosing;
			}
		}
		cout<<input<<"\n";
	}

	return 0;
}
