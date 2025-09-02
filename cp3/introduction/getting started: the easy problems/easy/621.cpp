#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define debug(x) cout << #x << "= '" << x << "'\n"

using namespace std;

int main() {
	fastio;
	
	int N;
	cin >> N;
	string value;

	while(N--) {
		cin >> value;

		if(value == "1" || value == "4" || value == "78") cout << "+\n"; 
		else if(value.substr(value.size()-2, 2) == "35") cout << "-\n";
		else if(value[0] == '9' && value[value.size()-1] == '4') cout << "*\n";
		else if(value.substr(0, 3) == "190") cout << "?\n";
	}

	return 0;
}
