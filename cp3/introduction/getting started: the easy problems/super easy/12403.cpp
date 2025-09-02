#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int k, value;
string str;
string parsedStr[2];

int main() {
	fastio;
	cin>>k;
	k++;
	
	while(k--) {
		getline(cin, str);
		int index = str.find(" ");

		if(index != -1) {
			parsedStr[0] = str.substr(0, index);
			parsedStr[1] = str.substr(index, str.size());
			value += stoi(parsedStr[1]);
		} else {
			parsedStr[0] = str;
			parsedStr[1].clear();
			if(value > 0) cout<<value<<"\n";
		}
	}

	return 0;
}
