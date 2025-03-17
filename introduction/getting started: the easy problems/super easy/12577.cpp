#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int C;
string input, resp;

int main() {
	fastio;
	
	while(cin>>input, input[0] != '*') {
		if(input == "Hajj") resp = "Hajj-e-Akbar";
		else if(input == "Umrah") resp = "Hajj-e-Asghar";
		
		cout<<"Case "<<++C<<": "<<resp<<"\n";
	}

	return 0;
}

